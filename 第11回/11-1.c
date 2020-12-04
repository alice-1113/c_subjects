#include <stdio.h>

struct student {
    int id;
    char name[100];
};

int main(void){
    struct student profile = {
        20206000,
        "Nichidai Taro"
    };

    printf("student ID number: %d\n", profile.id);
    printf("name: %s\n", profile.name);

    return 0;
}