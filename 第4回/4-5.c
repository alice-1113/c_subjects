#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2);

int main(void){
    double x1, y1;
    double x2, y2;
    double kyori;

    printf("<< Point A >>\n");
    printf("x coordinate value : ");
    scanf("%lf", &x1);
    printf("y coordinate value : ");
    scanf("%lf", &y1);

    printf("<< Point B >>\n");
    printf("x coordinate value : ");
    scanf("%lf", &x2);
    printf("y coordinate value : ");
    scanf("%lf", &y2);

    kyori = distance(x1, y1, x2, y2);
    printf("\nThe distance between two points is %lf.\n", kyori);
    return 0;
}

double distance(double x1, double y1, double x2, double y2){
    double kyori;
    double x = x2-x1;
    double y = y2-y1;
    kyori = sqrt(pow(x, 2.0) + pow(y, 2.0));
    return kyori;
}