#include <stdio.h>

int draw_char();

int main(void){
    int n;
    while(true){}
    printf("number of asterisks :");
    scanf("%d", &n);
    if(-1<n){
        draw_char(n);
    } else {
        printf("ERROR: invalid value!");
    }

    return 0;
}

int draw_char(int n){
    int i;
    for(i=0;i<n;i++){
        printf("*");
    }
    printf("\n");
    return 0;
}