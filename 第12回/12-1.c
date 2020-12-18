#include <stdio.h>

struct card{
    char name[10];
    int money;
    int point;
};

int main(void){
    struct card shop;

    printf("名前: ");
    scanf("%s", shop.name);
    printf("チャージ");
    scanf("%d", &shop.money);
    shop.point = 0;

    printf("\n購入します\n");

    if(shop.money < 1000){
        printf("残高不足です.残額:%d円\n", shop.money);
    } else {
        shop.money -= 1000;
        shop.point += 5;
        printf("買い物後の残高: %d円\n", shop.money);
        printf("買い物後のポイント: %d\n", shop.point);
    }

    return 0;
}
