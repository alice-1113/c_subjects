#include <stdio.h>

void error_message(void);

int main(void){
    int en;

    printf("Input an even number : ");
    scanf("%d", &en);
    if(en%2==0){
        printf("The input number %d is even.\n", en);
    } else {
        error_message();
    }
    return 0;
}

void error_message(void){
    printf("ERROR : invalid value!");
}