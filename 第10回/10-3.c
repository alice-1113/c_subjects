#include <stdio.h>
#define LIM 50


int get_length( char str[ ] );

int main(void){
    int len=0;
    char string[LIM];
    printf("Entar a string:");
    scanf("%s", string);
    len = get_length(string);
    printf("The length of the string:%d\n", len);
    printf("The string (%s) in reverse order:", string);
    for(int i=len-1; i>=0; --i){
        printf("%c", string[i]);
    }
    return 0;
}

int get_length( char str[ ] ){
    int length = 0;
    for(int i=0; str[i] != '\0'; i++){
        length += 1;
    }
    return length;
}