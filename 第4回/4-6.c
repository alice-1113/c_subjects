#include <stdio.h>

void error_message(void);

int get_month(void);

int main(void){
    int bmonth, nmonth;
    int diff;
    printf("What month were you born?\n");
    bmonth = get_month();
    printf("What month is it now?\n");
    nmonth = get_month();
    diff = bmonth - nmonth;
    if(diff<5){
        diff = diff + 12;
        if(diff<0){
            diff *= -1;
        }
    }
    if(diff==0){
        printf("This month is your birth month.\n");
    } else if(diff==1){
        printf("There is one month until your birth month.\n");
    } else {
        printf("There are %d months until your birth month.\n", diff);
    }
    return 0;
}

void error_message(void){
    printf("ERROR : invalid value!\n");
}

int get_month(void){
    int month;
    do {
        printf("MONTH : ");
        scanf("%d", &month);
        if((0<month)&&(month<13)){
            return month;
        } else {
            error_message();
        }
    } while((12<month)||(month<1));
}