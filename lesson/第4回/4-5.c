#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2);

int main(void){
    int x1, y1;
    int x2, y2;
    double kyori;

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

    kyori = distance(x1, y1, x2, y2);
    printf("\nThe distance between two points is %lf.\n", kyori);
    return 0;
}

double distance(int x1, int y1, int x2, int y2){
    double kyori;
    double x = (double)(x2-x1);
    double y = (double)(y2-y1);
    kyori = sqrt(pow(x, 2.0) + pow(y, 2.0));
    return kyori;
}