#include <stdio.h>

int main(void){
  int apple_price=100, orange_price=50;
  int apple_count, orange_count;
  int apple_discount=0, orange_discount=0;
  float tmpa, tmpo;
  float apple_total, orange_total;
  
  printf("The number of apples:");
  scanf("%d", &apple_count);
  printf("The number of oranges:");
  scanf("%d", &orange_count);
  if(apple_count+orange_count>=10&&orange_count<10&&apple_count<10){
    apple_discount = 5;
    orange_discount = 5;
  } else {
    if(apple_count>=20){
      apple_discount = 20;
    } else if(apple_count>=10){
      apple_discount = 10;
    }
    if(orange_count>=10){
      orange_discount = 20;
    }
  }

  printf("[apple]\n");
  printf("Unit price:%d yen\n", apple_price);
  printf("Quantity:%d\n", apple_count);
  printf("Discount rate:%d %%\n", apple_discount);
  tmpa = (apple_price * apple_count) * (apple_discount / 100);
  apple_total = (apple_price * apple_count) - tmpa;
  /* 上２行 */
  printf("%.1f", tmpa);
  printf("Total price of apples:%.1f yen\n", apple_total);

  printf("[orange]\n");
  printf("Unit price:%d yen\n", orange_price);
  printf("Quantity:%d\n", orange_count);
  printf("Discount rate:%d %%\n", orange_discount);
  tmpo =  (orange_price * orange_count) * (orange_discount / 100);
  orange_total = (orange_price * orange_count) - tmpo;
  /* 上２行 */
  printf("Total price of oranges:%.1f yen\n", orange_total);

  printf("[Total]\n");
  printf("Total amount:%.1f yen", apple_total + orange_total);

  scanf("%d", &apple_count);
  return 0;
}