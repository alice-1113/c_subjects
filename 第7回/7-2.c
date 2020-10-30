#include <stdio.h>
#define SIZE 10

int main(void){
    int total;
    int array[SIZE];

    for(int i=0; i<SIZE; i++){
        printf("Input Data No.%2d : ", i+1);
        scanf("%d", &array[i]);
        total += array[i];
    }

    printf("\nData List:\n");
    for(int j=0; j<SIZE; j++){
        printf("[No.%2d] %d\n", j+1, array[j]);
    }

    printf("\nTotal value = %d\n", total);

    return 0;
}