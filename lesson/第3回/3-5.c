#include <stdio.h>

int main(void){
    int n, value;
    int num_max, num_min;
    int max, min, sum;
    float average;

    printf("Input the number of students: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("No.%d: ", i);
        scanf("%d", &value);
        if(i==1||value<min){
            if(value<min){
                num_min = i;
            }
            min = value;
        }
        if(i==1||max<value){
            if(max<value){
                num_max = i;
            }
            max = value;
        }
        sum += value;
    }
    average = (float)sum/ (float)n;
    printf("Average: %.1f\n", average);
    printf("Max: No.%d, %d\n", num_max, max);
    printf("Min: No.%d, %d\n", num_min, min);
    return 0;
}