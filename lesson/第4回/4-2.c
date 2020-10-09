#include <stdio.h>

int error_message();

int main(void){
    int en;

    printf("Input an even number : ");
    scanf("%d", &en);
    if(en%2==0){
        printf("The input value %d is even\n", en);
    } else {
        error_message();
    }
    return 0;
}

int error_message(){
    prinf("ERROR: invalid value!");
    return 0
}