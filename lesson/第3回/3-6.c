#include <stdio.h>

int main(void){
    int h,w;

    printf("H: ");
    scanf("%d", &h);
    printf("W: ");
    scanf("%d", &w);

    for(int y=1; y<=h; y++){
        for(int x=1; x<=w; x++){
            if((y==1||y==h)||(x==1||x==w)){
                printf("#");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
    scanf("%d", &h);
    return 0;
}