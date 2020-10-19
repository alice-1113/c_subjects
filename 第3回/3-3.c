#include <stdio.h>

int main(void){
    int min, max;
    int sum=0;

    printf("min: ");
    scanf("%d", &min);
    printf("max: ");
    scanf("%d", &max);

    while(min<=max){
        sum += min;
        min += 1;
    }
    printf("sum: %d\n", sum);
    return 0;
}