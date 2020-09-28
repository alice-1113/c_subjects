#include <stdio.h>

int main(void){
    int value; /* 入力用 */
    int max, min; /* 出力用 */
    int i; /* カウンタ */

    for(i=1;i<4;i++){
        printf("Input No.%d:", i);
        scanf("%d", &value);
        if(i==1||value>max){
            max = value;
        }
        if(i==1||value<min){
            min = value;
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    scanf("%d", &i);
    return 0;
}