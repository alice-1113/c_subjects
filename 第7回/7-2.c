#include <stdio.h>
#define SIZE 10

int main(void){
    int total;
    int array[SIZE];

    for(int i=0; i<SIZE; i++){
        printf("Input Data No. %d", i);
        scanf("%d", &array[i]);
        total += array[i];
    }

    printf("Data List:\n")
    for(int j=0; j<size; j++){
        printf("[No. %d] %d\n", j, array[j]);
    }

    printf("Total value = %d\n", total);

    return 0;
}