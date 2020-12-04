#include <stdio.h>

#define NUM 5

struct student {
    int id;
    char name[100];
    double height;
    double weight;
};

int main(void) {
    struct student studentlist[NUM];
    int i;

    for(i = 0; i<NUM; i++){
        printf("ID number: ");
        scanf("%d", &studentlist[i].id);
        printf("name: ");
        scanf("%s", studentlist[i].name);
        printf("height: ");
        scanf("%lf", &studentlist[i].height);
        printf("weight: ");
        scanf("%lf", &studentlist[i].weight);
    }

    for(i = 0; i<NUM; i++){
        printf("ID number: %d, name: %s, height: %.1lf cm, weight: %.1lf kg\n",
                studentlist[i].id,
                studentlist[i].name,
                studentlist[i].height,
                studentlist[i].weight);
    }
}