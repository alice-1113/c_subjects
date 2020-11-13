#include <stdio.h>
#define STUDENT 10
#define SUBJECT 3
#define ENG 1
#define MAT 2
#define JPN 3

void read_score(int score[][3], int n);

void show_score(int score[][3], int subject, int n);

/*
得点を整数値として読み込み，2次元整数型配列に格納する．
2次元整数型配列の学生数を表す要素数を10としてdefine文でマクロ定義せよ．
最初に学生数を読み込み，その最大値を10とする．
得点の読み込み後，科目番号の選択を促すメニューを表示する．
科目番号の選択メニューでは，科目番号あるいは終了を選択する．
科目番号が選択されると指定科目の得点表を表示して
再び科目番号の選択メニューへ戻る．
終了が選択されるとプログラムが終了する
*/
int main(void) {
    int score[STUDENT][SUBJECT];
    int n, sel;
    printf("Enter the number of students (1-10)\n");
    printf("The number of students:");
    scanf("%d", &n);

    read_score(score, n);

    while(1){
        printf("Select the subjects to be displayed in the table\n");
        printf("Eng.=>1,Math.=>2,Jpn.=>3,Terminate=>0:");
        scanf("%d", &sel);
        if(sel==0){
            printf("\nTerminated.\n");
            break;
        } else {
            show_score(score, sel, n);
        }
    }


    return 0;
}

void read_score(int score[][3], int n) {
    for (int i = 0; i < n; i++) {
        // Student が Studnetになってるので注意
        printf("Studnet #%d\n", i+1);
        for (int j = 0; j < SUBJECT; j++) {
            do {
                // 0以上100以下の場合はループを抜ける.
                printf("(%d)", j + 1);
                if (j + 1 == ENG) {
                    printf("English:");
                } else if (j + 1 == MAT) {
                    printf("Mathematics:");
                } else {
                    printf("Japanese Language:");
                }
                scanf("%d", &score[i][j]);
            } while ((score[i][j] < 0) || (score[i][j] > 100));
        }
    }
    printf("\n");
}

void show_score(int score[][3], int subject, int n) {
    printf("\n[");
    if (subject == ENG) {
        printf("Eng");
    } else if (subject == MAT) {
        printf("Math");
    } else if (subject == JPN) {
        printf("Jpn");
    }
    printf(".]\n");
    printf("Student #, Score\n");
    for (int i = 0; i < n; i++) {
        printf("        %d %6d\n", i+1, score[subject - 1][i]);
    }
    printf("\n");
}