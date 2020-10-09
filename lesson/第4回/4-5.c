#include <stdio.h>
#include <math.h>

double distance();

int main(void){
    double kyori;
    kyori = distance();
    printf("The distance between two points is %lf\n", kyori);
    return 0;
}

double distance(){
    int x1, y1;
    int x2, y2;
    double kyori;
    // kyoriは仮
    printf("<< Point A >>\n");
    printf("x coordinate value : ");
    scanf("%d", &x1);
    printf("y coordinate value : ");
    scanf("%d", &y1);

    printf("<< Point B >>\n");
    printf("x coordinate value : ");
    scanf("%d", &x2);
    printf("y coordinate value : ");
    scanf("%d", &y2);

    double x = (double)(x2-x1);
    double y = (double)(y2-y1);
    kyori = sqrt(pow(x, 2.0) + pow(y, 2.0));
    return kyori;
}