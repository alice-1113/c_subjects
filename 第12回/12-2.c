#include <stdio.h>

int order(int key);

int m = 1;

int main(void){
    int key, n;

    while(1){
        printf("%d日目:", m);
        if((m+5)%7 == 0) m++;
        printf("選択してください(予約=>1, キャンセル=>2, 終了=>0) : ");
        scanf("%d", &key);
        n = order(key);
        if(key==0){
            printf("合計アクセス数: %d人\n\n", n);
            break;
        }
        printf("予約数: %d 人\n\n", n);
    }

    return 0;
}

int order(int key){
    static int reserve=0;
    static int access = 0;
    int n;

    switch(key){
        case 0:
            n= access;
            break;
        case 1:
            printf("予約人数: ");
            scanf("%d", &n);
            reserve += n;
            access += n;
            n = reserve;
            break;
        case 2:
            printf("キャンセル人数: ");
            scanf("%d", &n);
            reserve -= n;
            n = reserve;
            break;
        default:
            printf("入力ミス\n");
    }
    m++;

    printf("n=%d, m=%d, reserve=%d, access=%d\n", n, m, reserve, access);
    return n;
}