#include <stdio.h>
#define SIZE 10

void add_data(int array[], int n);

int main(void){
    int array[SIZE];
    int n, sum=0;
    printf("Enter the number of data　(1-10) :");
    scanf("%d", &n);
    printf("Enter data\n");
    for(int i=0; i<n; i++){
        printf("No.%d:", i+1);
        scanf("%d", &array[i]);
    }
    add_data(array, n);
    printf("The computation results are listed as follows:\n");
    for(int i=0; i<n; i++){
        sum += array[i];
        printf("No.%d:%d\n", i+1, sum);
    }
    return 0;
}

void add_data(int array[], int n){
    for(int i=0; i<n; i++){
        array[i] = array[i] * 10;
    }
}