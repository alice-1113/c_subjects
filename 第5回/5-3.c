// レポートのプログラム5-3

#include<stdio.h>
void  max1(int d);
void  max2(int d);

int main(void) {
    max1(40); // 30
    max1(80); // 100
    max1(20); // 50
    max2(40); // 30
    max2(80); // 100
    max2(20); // 50
    return 0;
}

void max1(int d) {
    int x = 0;
    if(d > x) {
        x=d;
    }
    printf("max1:%d -> %d\n", d, x);
}

void max2(int d) {
    static int x = 0;
    if(d > x) {
        x=d;
    }
    printf("max2:%d -> %d\n", d, x);
}
