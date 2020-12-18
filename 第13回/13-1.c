#include <stdio.h>
#define N 10


int main(void){
    int n; // input data number
    int input; // input value number
    int data[N][2];

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
    return 0;
}