#include <stdio.h>

int main(void) {
    int i;
    i = 1;
    while (i<=10) {
        printf("i = %d\n", i);
        i++;
    }
    scanf("%d", &i);
    return 0;
}