#include <stdio.h>

int main(void){
  int i, value, max=0;
  for(i=0; i<4; i++){
    do {
      printf("Value No.%d:", i+1);
      scanf("%d", &value);
      if (value <= 0){
        printf("Value is not a positive number\n");
      }
    } while (value <= 0);
    if ((i==0)||(max<=value)){
      max = value;
    }
  }
  printf("The maximum value is %d\n", max);
  return 0;
}