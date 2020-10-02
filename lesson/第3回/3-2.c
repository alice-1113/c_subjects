#include <stdio.h>

int main(void){
    int i, sum;
    sum = 0;
    for( i = 100; i <= 1000; i++ ) {
        sum = sum + i;
    }
    printf("sum = %d\n", sum );
    return 0;
}