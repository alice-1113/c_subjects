#include <stdio.h>
#define N_STUDENTS 3
#define N_SUBJECTS 5

int main(void) {
    int i, j;
    int score[N_STUDENTS][N_SUBJECTS];
    printf("Enter the scores of 3 students in the order of subjects\n");
    printf("Eng. Math. Sci. Jpn. Soc.\n");
    for (i = 0; i < N_STUDENTS; i++) {
        printf("No.%d\n", i+1);
        for (j = 0; j < N_SUBJECTS; j++) {
            scanf("%d", &score[i][j]);
        }
    }

    printf(
        "Below is the list of the scores of the three students in order of "
        "subject.\n");
    /*        12345678    12     123    123    12*/
    printf("        Eng.  Math.   Sci.   Jpn.  Soc.\n");
    for (i = 0; i < N_STUDENTS; i++) {
        printf("No.%d:", i + 1);
        for (j = 0; j < N_SUBJECTS; j++) {
            printf("%6d", score[i][j]);
            if (j == N_SUBJECTS-1) printf("\n");
            else printf(",");
        }
    }
    return 0;
}