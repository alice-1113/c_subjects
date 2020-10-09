#include <stdio.h>

double area_triangle(double base, double hight);

int main(void){
    double base, hight;
    double area;

    do{
        printf("base of triangle : ");
        scanf("%lf", &base);
        if(base<1){
            printf("ERROR: value is not positive!\n");
        }
    } while(base<1);

    do{
        printf("hight of triangle : ");
        scanf("%lf", &hight);
        if(hight<1){
            printf("ERROR: value is not positive!\n");
        }
    } while(hight<1);

    area = area_triangle(base, hight);
    printf("Area = %.2lf\n", area);
    return 0;
}

double area_triangle(double base, double hight){
    double area;
    area = (base * hight) / 2;
    return area;
}