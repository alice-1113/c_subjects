#include <stdio.h>

int main(void){
    int n, value;
    int num_max, num_min;
    int max, min, sum=0;
    double average;

    printf("Input the number of students: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("No.%d: ", i);
        scanf("%d", &value);
        if(i==1||value<min){
            num_min = i;
            min = value;
        }
        if(i==1||max<value){
            num_max = i;
            max = value;
        }
        sum += value;
    }
    average = (double)sum/ (double)n;
    printf("Average: %.1f\n", average);
    printf("Max: No.%d, %d\n", num_max, max);
    printf("Min: No.%d, %d\n", num_min, min);
    return 0;
}