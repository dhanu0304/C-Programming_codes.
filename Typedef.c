#include<stdio.h> //Using typedef to define a structure for employee details
typedef struct {
    int emp_id;
    char name[20];
    float salary;
} employee;
int main () 
{
    employee e1 = {1001, "John Doe", 55000.50};
    printf("Employee ID: %d\n", e1.emp_id);
    printf("Employee Name: %s\n", e1.name);
    printf("Employee Salary: %.2f\n", e1.salary);
    return 0;
}