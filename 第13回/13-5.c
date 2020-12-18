#include <stdio.h>
#define N 10
#define M 10

typedef struct {
    int data[2];
    char id_num[M];
} DATA;

void average_calc(DATA data[], double mean[], int no);
int max_calc(double mean[], int no);


int main(void){
    int n; // input data number
    int input; // input value number
    int max_index;
    double mean[N];
    DATA data[N];

    do {
        printf("Input the number of data:");
        scanf("%d", &n);
        if((0>n) || (n>10))
            printf("The number of data is greater than 10 or negative\n");
    } while((0>n) || (n>10));
    for(int i=0; i<n; i++){
        printf("ID number of data No. %d:", i+1);
        scanf("%s", data[i].id_num);
    }
    printf("Input the data of each ID\n");
    for(int i=0; i<n; i++){
        printf("%s\n", data[i].id_num);
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
            data[i].data[j] = input;
        }
    }

    printf("\nInput data:\n");
    for(int i=0; i<n; i++){
        printf("[%s] (a) %3d (b) %3d\n", data[i].id_num, data[i].data[0], data[i].data[1]);
    }

    average_calc(data, mean, n);
    printf("\nThe average value of each data set:\n");
    for(int i=0; i<n; i++){
        printf("[%s] %.1f\n", data[i].id_num, mean[i]);
    }

    max_index = max_calc(mean, n);
    printf("\nThe maximum value of the average value is %.1f of %s\n", mean[max_index], data[max_index].id_num);
    return 0;
}

void average_calc(DATA data[], double mean[], int no){
    double result;
    for(int i=0; i<no; i++){
        result = (double)(data[i].data[0] + data[i].data[1]) / 2.0;
        mean[i] = result;
    }
}

int max_calc(double mean[], int no){
    int max=0;
    for(int i=1; i<no; i++){
        if(max<mean[i]){
            max = i;
        }
    }
    return max;
}