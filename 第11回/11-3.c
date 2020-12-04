#include <stdio.h>
#define NUM 5


struct student{
    int id;
    int math;
    int english;
    int physics;
    int total;
};

int calculateSum(struct student s);
void printStudent(struct student s);

int main(void){
    struct student students[NUM];
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