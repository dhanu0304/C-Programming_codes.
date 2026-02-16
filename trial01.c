#include<stdio.h>
struct student {
    int id;
    char name[25];
    float marks;
};
int main() { 
    struct student S1= {101,"Prince",89.2};
    printf("ID: %d\n", S1.id);
    printf("Name: %s\n", S1.name);
    printf("Marks: %.2f\n", S1.marks);
     struct student S2= {102,"Payal",92.2};
    printf("\nID: %d\n", S2.id);
    printf("Name: %s\n", S2.name);
    printf("Marks: %.2f\n", S2.marks);
     struct student S3= {103,"Prajwal",70.2};
    printf("\nID: %d\n", S3.id);
    printf("Name: %s\n", S3.name);
    printf("Marks: %.2f\n", S3.marks);
    return 0;
}