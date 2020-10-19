// レポートのプログラム5-1
#include <stdio.h>

int main(void) {
int x=5, y=6, z=7;

  printf("(1) x=%d, y=%d, z=%d \n", x, y, z);
  {
int y=8, z=9;
    printf("(2) x=%d, y=%d, z=%d \n", x, y, z);
    {
      int z=10;
      printf("(3) x=%d, y=%d, z=%d \n", x, y, z);
    }
    printf("(4) x=%d, y=%d, z=%d \n", x, y, z);
  }
  printf("(5) x=%d, y=%d, z=%d \n", x, y, z);

  return 0;
}
