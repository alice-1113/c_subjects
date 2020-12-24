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


int main(void){
    PLAYDATA playdata = {
        0, 0, 0, 0, // 対戦数　勝利数*2　引き分け数
        0.0, 0.0,  // 勝率*2
        "", "" // 名前*2
    };
    printf("Enter Player1's name (max. 16 chars): ");
    scanf("%s", playdata.player1);
    printf("Enter Player2's name (max. 16 chars): ");
    scanf("%s", playdata.player2);
    printf("\n");
    printf("%s vs %s\n", playdata.player1, playdata.player2);
    return 0;
}