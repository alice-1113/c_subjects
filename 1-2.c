#include <stdio.h>

int main(void){
  int x,y;
  for(x=9;0<x;x--){
    for(y=9;0<y;y--){
      printf("%d ", x*y);
    }
    printf("\n");
  }

  return 0;
}
