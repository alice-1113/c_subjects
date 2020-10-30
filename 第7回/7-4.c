#include <stdio.h>
#define SIZE 10

int main(void){
    int search_val;
    int tmp=0;
    int array[SIZE];

    for(int i=0; i<SIZE; i++){
        printf("Input Data No.%2d : ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\nInput a search value: ");
    scanf("%d", &search_val);

    printf("\n<< Results >>\n");
    printf("search value: %d\n", search_val);

    printf("data smaller than search value: ");
    for(int i=0; i<SIZE; i++){
        if((0<tmp)&&(array[i]<search_val)){
            printf(",%d", array[i]);
        } else if((tmp==0)&&(array[i]<search_val)){
            printf("%d", array[i]);
            tmp++;
        }
    }
    printf("\nsearched data: ");
    tmp = 0;
    for(int i=0; i<SIZE; i++){
        if((0<tmp)&&(array[i]==search_val)){
            printf(",%d", array[i]);
        } else if((tmp==0)&&(array[i]==search_val)){
            printf("%d", array[i]);
            tmp++;
        }
    }
    printf("\ndata larger than search value: ");
    tmp = 0;
    for(int i=0; i<SIZE; i++){
        if((0<tmp)&&(array[i]>search_val)){
            printf(",%d", array[i]);
        } else if((tmp==0)&&(array[i]>search_val)){
            printf("%d", array[i]);
            tmp++;
        }
    }
    return 0;
}