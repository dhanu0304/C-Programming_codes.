#include<stdio.h>
struct student {
    int id ;
    char name[20];
    float marks;
 };
 int main() {
    struct student s1= {101,"Alex",89.5};
    struct student s2= { 102,"Prince",90};
    struct student s3= {103,"David",85};
    printf(" \n STUDENT 01\n");
    printf("ID = %d\n",s1.id);
    printf("Name = %s\n",s1.name);
    printf("Marks= %.2f\n",s1.marks);

    printf(" \n STUDENT 02\n");
    printf("ID = %d\n",s2.id);
    printf("Name = %s\n",s2.name);
    printf("Marks= %.2f\n",s2.marks);
    
    printf(" \n STUDENT 03\n");
    printf("ID = %d\n",s3.id);
    printf("Name = %s\n",s3.name);
    printf("Marks= %.2f\n",s3.marks);
    return 0;
 }