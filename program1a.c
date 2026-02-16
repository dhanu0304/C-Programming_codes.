#include<stdio.h>
struct Student {
    int id;
    char name[10];
    float marks;
};
int main() { 
    struct Student S1= {101,"Narendra Modi",89.2};
    printf("ID: %d\n", S1.id);
    printf("Name: %s\n", S1.name);
    printf("Marks: %2f\n", S1.marks);
    return 0;
}