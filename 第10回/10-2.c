#include <stdio.h>
#define LIM 50

int main(void){
    int len;  // num of the word
    char word[LIM];
    printf("Enter the number of the word (<50):");
    scanf("%d", &len);
    for(int i=0; i<len; i++){
        printf("Enter the %dth character of the word:", i+1);
        scanf("%*c%c", &word[i]);
    }
    word[len] = '\0';

    printf("\nThe word is %s", word);
    return 0;
}