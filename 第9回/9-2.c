#include <stdio.h>
#define ROOM 4
#define FLOOR 3


int main(void){
    int apart[FLOOR][ROOM];
    printf("Please enter the age of the resident\n");
    for(int i=0; i<FLOOR; i++){
        printf("<< %dth floor >>\n", i+1);
        for(int j=0; j<ROOM; j++){
            printf("Room %d:", j+1);
            scanf("%d", &apart[i][j]);
        }
    }

    printf("\n<< Age sketch of room resident>>\n");
    for(int i=FLOOR; 0<i; i--){
        printf("[%dth floor]", i);
        for(int j=0; j<ROOM; j++){
            printf(" (Rm. %d)%d y.o.", j+1, apart[i-1][j]);
        }
        printf("\n");
    }

    return 0;
}