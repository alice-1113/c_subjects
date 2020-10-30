#include <stdio.h>
#define SIZE 10


int main(void){
    int max, min, sum=0;
    int max_index, min_index;
    double ave;
    int array[SIZE];

    for(int i=0; i<SIZE; i++){
        printf("Input Data No.%2d : ", i+1);
        scanf("%d", &array[i]);
        if((i==0)||(max<array[i])){
            max = array[i];
            max_index = i+1;
        }
        if((i==0)||(array[i]<min)){
            min = array[i];
            min_index = i+1;
        }
        sum += array[i];
    }

    printf("\nData List:\n");

    for(int j=0; j<SIZE; j++){
        printf("[No.%2d] %d\n", j+1, array[j]);
    }

    ave = (double)sum/(double)SIZE;
    printf("\naverage value : %0.2lf\n", ave);
    printf("maximum value : %d (no.%d)\n", max, max_index);
    printf("minimum value : %d (no.%d)", min, min_index);
    return 0;
}