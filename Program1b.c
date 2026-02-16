#include<stdio.h>
typedef struct {
    int empId;
    char empName[30];
    float empSalary;
} Employee;
int main() { 
    Employee E1 = {201, "Alice", 75000.5};
    printf("Employee ID: %d\n", E1.empId);
    printf("Employee Name: %s\n", E1.empName);
    printf("Employee Salary: %.2f\n", E1.empSalary);
    return 0;
}
    