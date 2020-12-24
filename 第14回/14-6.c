#include <stdio.h>
#define LEN_NAME 17

typedef struct {
    int num_play;           /* 対戦数 */
    int num_player1_win;    /* Player1の勝利数 */
    int num_player2_win;    /* Player2の勝利数 */
    int num_draw;           /* 引き分け数 */
    double ave_player1_win; /* Player1の勝率 */
    double ave_player2_win; /* Player2の勝率 */
    char player1[LEN_NAME]; /* Player1の名前 */
    char player2[LEN_NAME]; /* Player2の名前 */
} PLAYDATA;

void print_board(int board[3][3]);
void mark_board(int board[3][3], int turn);
int judge(int board[3][3]);
void print_playdata(PLAYDATA data);


int main(void) {
    int turn;
    int endf;
    char str[4];
    PLAYDATA playdata = {
          0,   0,  0,  0,  // 対戦数　勝利数*2　引き分け数
        0.0, 0.0,        // 勝率*2
         "",  ""          // 名前*2
    };

    int board[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    printf("Enter Player1's name (max. 16 chars): ");
    scanf("%s", playdata.player1);
    printf("Enter Player2's name (max. 16 chars): ");
    scanf("%s", playdata.player2);
    printf("\n");
    printf("%s vs %s\n", playdata.player1, playdata.player2);
    printf("\n");

    while(1){
        endf = 0;
        turn = 1;
        playdata.num_play++;
        for (int i = 0; i < 9; i++) {
            mark_board(board, turn);
            print_board(board);
            switch (judge(board)) {
                case 1:
                    printf("Player1 (o), %s wins!\n", playdata.player1);
                    playdata.num_player1_win++;
                    endf = 1;
                    break;
                case -1:
                    printf("Player2 (x), %s wins!\n", playdata.player2);
                    playdata.num_player2_win++;
                    endf = 1;
                    break;
                case -2:
                    printf("Draw.\n");
                    playdata.num_draw++;
                    endf = 1;
                    break;
                default:
                    turn *= -1;
                    break;
            }
            playdata.ave_player1_win = (double)playdata.num_player1_win / (double)playdata.num_play;
            playdata.ave_player2_win = (double)playdata.num_player2_win / (double)playdata.num_play;
            if(endf==1){
                break;
            }
        }
        printf("\nContinue? (yes/no): ");
        scanf("%s", str);
        if(str[0] == 'n'){
            printf("\n");
            print_playdata(playdata);
            break;
        }
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                board[i][j] = 0;
            }
        }
    }
    return 0;
}

void print_board(int board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("|");
            if (board[i][j] == 1) {
                printf("o");
            } else if (board[i][j] == 0) {
                printf(" ");
            } else if (board[i][j] == -1) {
                printf("x");
            }
        }
        printf("|\n");
    }
}

void mark_board(int board[3][3], int turn) {
    int vertical, horizontal;  // 縦, 横
    if (turn == 1) {
        printf("Player1's turn (o)\n");
    } else if (turn == -1) {
        printf("Player2's turn (x)\n");
    }

    while (1) {
        printf("What is the vertical position? ");
        scanf("%d", &vertical);
        printf("What is the horizontal position? ");
        scanf("%d", &horizontal);

        if (((-1 < vertical) && (vertical < 3)) &&
            ((-1 < horizontal) && (horizontal < 3))) {
            if (board[vertical][horizontal] == 0) {
                break;
            }
        }

        printf("Cannot put there\n");
    }
    board[vertical][horizontal] = turn;
}

int judge(int board[3][3]) {
    static int draw=1;
    int map[3][3] = {{1, 2, 4}, {8, 16, 32}, {64, 128, 256}};
    int v[3] = {0, 0, 0}, h[3] = {0, 0, 0}, d[2] = {0, 0};

    draw++;
    // ななめの判定
    for(int i=0; i<3; i++){
        d[0] += map[i][i] * board[i][i];
        d[1] += map[i][2-i] * board[i][2-i];
    }
    for(int i=0; i<2; i++){
        if((d[i]==84) || (d[i]==273)){
            draw = 1;
            return 1;
        } else if ((d[i]==-84) || (d[i]==-273)){
            draw = 1;
            return -1;
        }
    }

    //　縦横の判定
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            h[i] += map[i][j] * board[i][j];
            v[i] += map[j][i] * board[j][i];
        }
        if (((h[i] == 7) || (h[i] == 56)) || (h[i] == 448)) {
            draw = 1;
            return 1;
        } else if (((h[i] == -7) || (h[i] == -56)) || (h[i] == -448)) {
            draw = 1;
            return -1;
        }
        if (((v[i] == 73) || (v[i] == 146)) || (v[i] == 292)) {
            draw = 1;
            return 1;
        } else if (((v[i] == -73) || (v[i] == -146)) || (v[i] == -292)) {
            draw = 1;
            return -1;
        }
    }

    if(draw%10 == 0){
        draw = 1;
        return -2;
    }
    return 0;
}

void print_playdata(PLAYDATA data){
    printf("Plays: %d\n", data.num_play);
    printf("Wins of Player1 %s: %d\n", data.player1, data.num_player1_win);
    printf("Wins of Player2 %s: %d\n", data.player2, data.num_player2_win);
    printf("Draws: %d\n", data.num_draw);
    printf("%s's winning percentage: %.3lf\n", data.player1, data.ave_player1_win);
    printf("%s's winning percentage: %.3lf\n", data.player2, data.ave_player2_win);
}