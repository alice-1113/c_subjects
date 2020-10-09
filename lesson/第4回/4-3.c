#include <stdio.h>

int get_month(void);

int main(void){
    int month;
    printf("What month is it now?\n");
    month = get_month();
    printf("This month is ");
    switch (month){
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            break;
    }
    printf(".\n");
    return 0;
}

int get_month(void){
    int month;
    do {
        printf("MONTH : ");
        scanf("%d", &month);
        if((0<month)&&(month<13)){
            return month;
        } else {
            printf("ERROR : invalid value!\n");
        }
    } while((12<month)||(month<1));
}