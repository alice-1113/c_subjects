#include <stdio.h>

int max3(int x, int y, int z);

int main(void) {
    int num1, num2, num3;
    int max;

    printf("<< Input three integers >>\n");
    printf("1 : ");
    scanf("%d", &num1);
    printf("2 : ");
    scanf("%d", &num2);
    printf("3 : ");
    scanf("%d", &num3);

    max = max3(num1, num2, num3);
    printf("The maximum value is %d.\n", max);

    return 0;
}

int max3(int x, int y, int z){
    int max;
    if(x>y&&x>z) max = x;
    else if(y>x&&y>z) max = y;
    else max = z;
    return max;
}