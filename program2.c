#include<stdio.h>
struct date {
    int day;
    int month;
    int year;
};
struct student {
    int id;
    char name[25];
    struct date dob; 
};
int main() { 
    struct student S1= {101,"Prince",{15, 8, 2000}};
    printf("Name: %s\n", S1.name);
    printf("Date of Birth: %02d,%02d,%04d\n", S1.dob.day, S1.dob.month, S1.dob.year);
    return 0;
}