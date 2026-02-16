#include<stdio.h>
#include<stdlib.h>
struct marks {
    int math;
    int phy;
    int comp;
};
struct student {
    int id;
    char name[20];
    struct marks m;
};
int main() {
    float average;
    struct student s1 = {101, "Kiran", {85, 90, 95}};
    printf("Student ID: %d\n", s1.id);
    printf("Student Name: %s\n", s1.name);
    printf("Marks in Math: %d\n", s1.m.math);
    printf("Marks in Physics: %d\n", s1.m.phy);
    printf("Marks in Computer: %d\n", s1.m.comp);
    average = (s1.m.math + s1.m.phy + s1.m.comp) / 3.0;
    printf("Average Marks: %.2f\n", average);
    return 0;
}