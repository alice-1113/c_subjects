#include <stdio.h>

int max3(int x, int y, int z);
int max33(int x, int y, int z);

int main(void) {
    int num1, num2, num3;
    int group;
    int i;
    int max;

    printf("<< Input a number of groups >>\n");
    printf("(each group consists of three integers)\n");
    printf("NUMBER OF GROUP : ");
    scanf("%d", &group);
    for (i = 1; i <= group; i++) {
        printf("GROUP-%d\n", i);
        printf("1 : ");
        scanf("%d", &num1);
        printf("2 : ");
        scanf("%d", &num2);
        printf("3 : ");
        scanf("%d", &num3);
        max = max33(num1, num2, num3);
    }

    printf("The maximum value among %d integers is %d.\n", 3*group, max);

    return 0;
}

int max3(int x, int y, int z) {
    int max;
    if(x>y&&x>z) max = x;
    else if(y>x&&y>z) max = y;
    else if(z>x&&z>y) max = z;
    return max;
}

int max33(int x, int y, int z) {
    static int max; /* 最大値を保持するstatic変数 */
    static int count = 0; /* 関数max33が初めて呼ばれたかどうか判定するstatic変数 */
    int tmp;

    if (count == 0) { /* 関数が初めて呼ばれたときの処理 */
        max = max3(x, y, z);
    } else { /* 関数が2回目以降に呼ばれたときの処理 */
        tmp = max3(x, y, z);
        if(tmp>max){
            max = tmp;
        }
    }
    count++;

    return max;
}