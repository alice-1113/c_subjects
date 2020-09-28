#include <stdio.h>

int main(void){
  int a, b;

  printf("Please enter two integers\n");
  printf("Integer A:");
  scanf("%d", &a);
  printf("Integer B:");
  scanf("%d", &b);
  if(a!=b){
    if(a>b){
      printf("The larger value is %d\n", a);
      printf("The smaller value is %d\n", b);
    } else {
      printf("The larger value is %d\n", b);
      printf("The smaller value is %d\n", a);
    }
  } else {
      printf("Both are %d\n", a);
  }

  return 0;
}