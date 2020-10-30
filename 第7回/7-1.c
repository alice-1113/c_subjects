#include <stdio.h>

#define SIZE 5

int main(void){
    int total=0;
    int array[SIZE] = {5, 4, 3, 2, 1};
    for(int i=0; i<SIZE; i++){
        total += array[i];
    }
    printf("Total value : %d\n", total);
    return 0;
}