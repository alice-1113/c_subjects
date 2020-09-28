#include <stdio.h>

int main(void){
    int n, m;

    printf("Input n:");
    scanf("%d", &n);

    printf("Input m:");
    scanf("%d", &m);

    if(n>=m){
        printf("%d\n", n);
    } else (n<m){
        printf("%d\n", m);
    }

    return 0;
}