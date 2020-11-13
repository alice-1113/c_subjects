#include <stdio.h>

int main(void){
    int data[][7] = {
                    {0,0,1,1,1,0,0},
                    {0,0,1,0,1,0,0},
                    {0,0,0,1,1,0,0},
                    {0,0,0,1,0,1,0},
                    {0,1,0,0,1,0,0},
                    {0,0,1,1,0,0,0},
                    {0,0,1,0,1,0,0},
                    {0,1,0,0,0,1,0} };

    for(int i=0; i<8; i++){
        for(int j=0; j<7; j++){
            if(data[i][j]){
                printf("o");
            } else {
                printf("x");
            }
        }
        printf("\n");
    }
    return 0;
}