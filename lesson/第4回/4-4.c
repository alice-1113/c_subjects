#include <stdio.h>

void draw_char(int a_number);

int main(void){
    int n;

    do {
        printf("number of asterisks :");
        scanf("%d", &n);
        if(-1<n){
            draw_char(n);
        } else {
            printf("ERROR: invalid value!");
        }
    } while (n<0);

    return 0;
}

void draw_char(int a_number){
    int i;
    for(i=0;i<a_number;i++){
        printf("*");
    }
    printf("\n");
}