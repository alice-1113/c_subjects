#include <stdio.h>

int main(void){
    int num;

    printf("Input a positive integer\n");
    while(num!=-1){
        scanf("%d", &num);
        if(num==-1){
            return 0;
        }
        if(num%5==0&&num%2==0){
            printf("%d is a multiple of 2 and 5", num);
        } else if(num%5==0){
            printf("%d is a multiple of 5", num);
        } else if(num%2==0){
            printf("%d is a multiple of 2", num);
        } else {
            printf("%d is not a multiple of 2 and 5", num);
        }
        printf("\n");
    }
    return 0;
}