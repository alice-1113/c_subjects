#include <stdio.h>
#include <stdlib.h>

int error_message();

int get_month();

int main(void){
    int bmonth, nmonth;
    int diff;
    printf("What month were you born?\n");
    bmonth = get_month();
    printf("What month is it now?\n");
    nmonth = get_month();
    diff = abs(bmonth - nmonth);
    printf("There are %d months until your birth month.\n", diff);
    return 0;
}

int error_message(){
    printf("ERROR: wrong number!");
    return 0;
}

int get_month(){
    int month;
    do {
        printf("MONTH : ");
        scanf("%d", &month);
        if((0<month)&&(month<13)){
            return month;
        } else {
            error_message();
        }
    } while((12<month)&&(month<1));
}