#include<stdio.h>
struct date {
    int date ,month ,year ;
};
struct student {
    char name[20];
    int roll_no;
    struct date dob;
};
int main() {
    struct student s1 = {"Alice", 101, {15, 8, 2000}};
    printf("Student Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Date of Birth: %d/%d/%04d\n", s1.dob.date, s1.dob.month, s1.dob.year);
    return 0;
}