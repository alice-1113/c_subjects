#include <stdio.h>
#define SIZE 20

void get_score( int score[ ], int n);
void error_message(int point);
void show_array( int array[ ], int n);
int max_array(int array[ ], int n);
int min_array(int array[ ], int n);
double average_array(int array[ ], int n);

int main(void){
    int score[SIZE];
    int n;

    printf("Please enter the number of data（1-20）:");
    scanf("%d", &n);
    get_score(score, n);
    show_array(score, n);
    printf("The maximum value of the data is %d.\n", max_array(score, n));
    printf("The minimum value of the data is %d.\n", min_array(score, n));
    printf("The average of the data is %.1lf.\n", average_array(score, n));
    return 0;
}

void get_score( int score[], int n){
    for(int i=0; i<n; i++){
        do {
            // (score[i]>100)||(0<score[i])のとき繰り返す
            printf("No.%d:", i+1);
            scanf("%d", &score[i]);
            if((score[i]>100)||(score[i]<0)){
                error_message(score[i]);
            }
        } while((score[i]>100)||(score[i]<0));
    }
}

void error_message(int point){
    if(point<0){
        printf("****Improper input:%d is less than 0****\n", point);
    }
    if(point>100){
        printf("****Improper input:%d is over 100****\n", point);
    }
}

void show_array( int array[], int n){
    printf("\nThe data is as follows:\n");
    for(int i=0; i<n; i++){
        printf("No.%d:%d\n", i+1, array[i]);
    }
    printf("\n");
}

int max_array(int array[], int n){
    int max;
    for(int i=0; i<n; i++){
        if((i==0)||(max<array[i])){
            max = array[i];
        }
    }
    return max;
}

int min_array(int array[], int n){
    int min;
    for(int i=0; i<n; i++){
        if((i==0)||(min>array[i])){
            min = array[i];
        }
    }
    return min;
}

double average_array(int array[], int n){
    double average;
    double sum=0;
    for(int i=0; i<n; i++){
        sum += (double)array[i];
    }
    average = sum/(double)n;
    return average;
}