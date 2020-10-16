// レポートのプログラム5-2

#include <stdio.h>
int total;
int main(void) {
  int i;
  int i_data;
  total = 0;

  // printf("数を入力してください：");　文字化けするためコメントアウト
  printf("Input a number : ");
  scanf("%d", &i_data);

  if(i_data <= 10) {
    int total = 0; // ここを消せば同一の結果をえられる.
    int count = 0;
    for(i=0; i <= i_data; i++) {
      total = total + count;
      count = count + 1;
    }
    printf("Total No.1: %d \n", total); /* ① */
  } else{
    // printf("値は10以下ではありません．\n");  文字化けするため..
    printf("Value is not under 10. \n");
  }

  printf("Total No.2: %d \n", total); /* ② */
  return 0;
}
