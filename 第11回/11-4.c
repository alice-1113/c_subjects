#include <stdio.h>
#define NUM 5


struct student{
    int id;
    int math;
    int english;
    int physics;
    int total;
};

typedef struct {
    int max;
    int min;
    double ave;
} STATISTICS;

int calculateSum(struct student s);
void printStudent(struct student s);
STATISTICS getStatistics(struct student data[]);

int main(void){
    struct student students[NUM];
    STATISTICS scores;

    for(int i=0; i<NUM; i++){
        printf("No. %d\n", i+1);
        printf("Student number: ");
        scanf("%d", &students[i].id);
        printf("Score of Mathematics: ");
        scanf("%d", &students[i].math);
        printf("Score of English: ");
        scanf("%d", &students[i].english);
        printf("Score of Physics: ");
        scanf("%d", &students[i].physics);
        students[i].total = calculateSum(students[i]);
    }

    printf("\nstu.num., Math., Eng., Phys., Sum\n");
    for(int i=0; i<NUM; i++){
        printStudent(students[i]);
    }

    scores = getStatistics(students);
    printf("\nThe maximum score is %d.\n", scores.max);
    printf("The minimum score is %d.\n", scores.min);
    printf("Average of scores is %.2lf.\n", scores.ave);
    return 0;
}

int calculateSum(struct student s){
    int sum=0;
    sum = s.math + s.english + s.physics;
    return sum;
}

void printStudent(struct student s){
    printf("%d,   %3d,  %3d,   %3d, %3d\n", s.id, s.math, s.english, s.physics, s.total);
}

STATISTICS getStatistics(struct student data[]){
    int max, min, sum=0;
    double ave;
    STATISTICS scores;
    for(int i=0; i<NUM; i++){
        if((i==0)||(max<data[i].total)){
            max = data[i].total;
        }
        if((i==0)||(data[i].total<min)){
            min = data[i].total;
        }
        sum += data[i].total;
    }
    ave = (double)sum/(double)NUM;
    scores.max = max;
    scores.min = min;
    scores.ave = ave;
    return scores;
}