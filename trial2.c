#include <stdio.h>
struct department {
    int cse;
    int it;
    int ai;
    int ml;
};

struct college {
    char name[50];
    char city[50];
    struct department dept;
};
int main() {
    struct college c1 = {"Garden City University", "Bengaluru", {120, 80, 60, 40}};
    printf("College Name: %s\n", c1.name);
    printf("City: %s\n", c1.city);
    printf("Departments:\n");
    printf("  CSE: %d students\n", c1.dept.cse);
    printf("  IT: %d students\n", c1.dept.it);
    printf("  AI: %d students\n", c1.dept.ai);
    printf("  ML: %d students\n", c1.dept.ml);
    return 0;
}
