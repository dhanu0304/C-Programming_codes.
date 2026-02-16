#include <stdio.h>

typedef struct {
    int emp_id;
    char name[100];
    float salary;
} Employee;

int main() {
    Employee employees[3];
    int i, highestIndex = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter details of Employee %d:\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);

        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("\n");
    }

    for (i = 1; i < 3; i++) {
        if (employees[i].salary > employees[highestIndex].salary) {
            highestIndex = i;
        }
    }

    printf("\n--- Employee with Highest Salary ---\n");
    printf("Employee ID : %d\n", employees[highestIndex].emp_id);
    printf("Name        : %s\n", employees[highestIndex].name);
    printf("Salary      : %.2f\n", employees[highestIndex].salary);

    return 0;
}