#include <stdio.h>
#define LEN_NAME 17

typedef struct {
    int num_play; /* 対戦数 */
    int num_player1_win; /* Player1の勝利数 */
    int num_player2_win; /* Player2の勝利数 */
    int num_draw; /* 引き分け数 */
    double ave_player1_win; /* Player1の勝率 */
    double ave_player2_win; /* Player2の勝率 */
    char player1[LEN_NAME]; /* Player1の名前 */
    char player2[LEN_NAME]; /* Player2の名前 */
} PLAYDATA;

void print_board(int board[3][3]);
void mark_board(int board[3][3], int turn);

int main(void){
    PLAYDATA playdata = {
        0, 0, 0, 0, // 対戦数　勝利数*2　引き分け数
        0.0, 0.0,  // 勝率*2
        "", "" // 名前*2
    };

    int board[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };


    printf("Enter Player1's name (max. 16 chars): ");
    scanf("%s", playdata.player1);
    printf("Enter Player2's name (max. 16 chars): ");
    scanf("%s", playdata.player2);
    printf("\n");
    printf("%s vs %s\n", playdata.player1, playdata.player2);
    printf("\n");
    mark_board(board, 1); // 14-3
    print_board(board);
    return 0;
}

void print_board(int board[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("|");
            if(board[i][j] == 1){
                printf("o");
            } else if(board[i][j] == 0){
                printf(" ");
            } else if(board[i][j] == -1 ){
                printf("x");
            }
        }
        printf("|\n");
    }
}

void mark_board(int board[3][3], int turn){
    int vertical, horizontal; // 縦, 横
    if(turn == 1){
        printf("Player1's turn (o)\n");
    } else if(turn == -1){
        printf("Player2's turn (x)\n");
    }

    while(1){
        printf("What is the vertical position? ");
        scanf("%d", &vertical);
        printf("What is the horizontal position? ");
        scanf("%d", &horizontal);
        if (((-1 < vertical) && (vertical < 3))
            && ((-1 < horizontal) && (horizontal < 3))){
                break;
            }
        printf("Cannot put there\n");
    }
    board[vertical][horizontal] = turn;
}