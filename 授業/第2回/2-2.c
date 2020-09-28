#include <stdio.h>

int main(void){
  int num;

  do {
    printf("Please enter a positive integer:");
    scanf("%d", &num);
  } while(num<1);

  if(num%2==0){
    printf("%d is an even number\n", num);
  } else {
    printf("%d is an odd number", num);
  }

  return 0;
}