#include <stdio.h>
#define SIZE 10

void add_data(int array[], int n);

int main(void){
    int array[SIZE];
    int n;
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
        printf("No.%d:%d\n", i+1, array[i]);
    }
    return 0;
}

void add_data(int array[], int n){
    array[0] = array[0] * 10;
    for(int i=1; i<n; i++){
        array[i] = array[i]*10 + array[i-1];
    }
}