#include <stdio.h>
#include <string.h>

#define NUM 4  // ４名
#define LIM 50  // 50文字(null文字含む)まで
#define SIZE 5

int main(void){
    char name[NUM][LIM];
    char home[NUM][LIM];
    char rep[SIZE];  // yes or no
    char pref[LIM];  // for serach
    int res = 1;  // found or not found

    for(int i=0; i<NUM; i++){
        printf("[No.%d]\n", i+1);
        printf("Enter Name:");
        scanf("%s", name[i]);
        printf("Enter the home prefecture:");
        scanf("%s", home[i]);
        printf("\n");
    }
    while(1){
        printf("Search by prefecture name? (yes or no):");
        scanf("%s", rep);
        if(rep[0] != 'y'){
            printf("Finished.\n");
            return 0;
        }
        printf("Enter the prefecture name to search:");
        scanf("%s", pref);

        printf("\n<Search results>\n");
        res = 1;
        for(int i=0; i<NUM; i++){
            if(strcmp(pref, home[i]) == 0){
                printf("[No.%d]  %s  %s\n", i+1, home[i], name[i]);
                res = 0;
            }
        }
        if (res==1){
            printf("Not found.\n");
        }
        printf("\n");
    }
    return 0;
}
