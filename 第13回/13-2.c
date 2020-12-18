#include <stdio.h>
#define N 10


void average_calc(int data[][2], double mean[], int no);

int main(void){
    int n; // input data number
    int input; // input value number
    int data[N][2];
    double mean[N];

    do {
        printf("Input the number of data:");
        scanf("%d", &n);
        if((0>n) || (n>10))
            printf("The number of data is greater than 10 or negative\n");
    } while((0>n) || (n>10));

    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            printf("Data No. %d-", i+1);
            if(j==0){
                printf("a:");
            } else {
                printf("b:");
            }
            do {
                scanf("%d", &input);
                if((input>100)||(input<0)){
                    printf("Input data is greater than 100 or negative\n");
                    printf("Data No. %d-", i+1);
                    if(j==0){
                        printf("a:");
                    } else {
                        printf("b:");
                    }
                }
            } while((input>100)||(input<0));
            data[i][j] = input;
        }
    }

    printf("\nInput data:\n");
    for(int i=0; i<n; i++){
        printf("[No.%2d] (a) %3d (b) %3d\n", i+1, data[i][0], data[i][1]);
    }

    average_calc(data, mean, n);
    printf("\nThe average value of each data set:\n");
    for(int i=0; i<n; i++){
        printf("[No.%2d] %.1f\n", i+1, mean[i]);
    }
    return 0;
}

void average_calc(int data[][2], double mean[], int no){
    double result;
    for(int i=0; i<no; i++){
        result = (double)(data[i][0] + data[i][1]) / 2.0;
        mean[i] = result;
    }
}