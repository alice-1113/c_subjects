#include <stdio.h>
#define SIZE 20

int max_array(int score[], int n);

int main(void){
    int score[SIZE];
    int max, n;

    printf("Please enter the number of students（1～20）:");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("No.%d:", i+1);
        scanf("%d", &score[i]);
    }
    max = max_array(score, n);
    printf("The maximum score of %d students is %d points.\n", n, max);
    return 0;
}

int max_array(int score[], int n){
    int max;
    for(int i=0; i<n; i++){
        if((i==0)||(max<score[i])){
            max = score[i];
        }
    }
    return max;

}