#include<stdio.h>
struct student {
    char name[20];
};
int main () {
    struct student s1 = { "Virat kohli" };
    printf("name= %s\n ", s1.name);
    return 0;
}