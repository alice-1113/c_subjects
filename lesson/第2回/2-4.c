#include <stdio.h>

int main(void){
  int value;
  int max, min;

  printf("Please enter three integers\n");
  for(int i=1;i<4;i++){
    printf("Integer (No.%d):", i);
    scanf("%d", &value);
    if(i==1){
      max = value;
      min = value;
    } else if(value<min){
      min = value;
    } else if(value>max){
      max = value;
    }
  }
  printf("Maximum:%d\n", max);
  printf("Minimum:%d\n", min);

  return 0;
}