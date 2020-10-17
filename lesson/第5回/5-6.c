#include <stdio.h>

int max_value(int n);

int min_value(int n);

int main(void){
    int value; // input number
    int maxVal, minVal;

    do {
        // valueが1以上10以下でない場合、再入力
        printf("Input number of data : ");
        scanf("%d", &value);
        if(value<1||10<value){
            printf("ERROR : invalid value!\n\n");
        }
    } while(value<1||10<value);

    for(int i=1;i<value+1;i++){
        int num;
        printf("\nNo. %d : ", i);
        scanf("%d", &num);
        maxVal = max_value(num);
        minVal = min_value(num);
        printf("RANGE : [ %d, %d ]\n\n", minVal, maxVal);
    }

    printf("max = %d\n", maxVal);
    printf("min = %d\n", minVal);

    return 0;
}

int max_value(int n){
    static int LocallyMaxVal;
    static int count=0; // 呼び出し回数

    if((count==0)||(n>LocallyMaxVal)){
        LocallyMaxVal = n;
    }
    count++;
    return LocallyMaxVal;
}

int min_value(int n){
    static int LocallyMinVal;
    static int count=0; // 呼び出し回数

    if((count==0)||(n<LocallyMinVal)){
        LocallyMinVal = n;
    }
    count++;
    return LocallyMinVal;
}