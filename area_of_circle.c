#include <stdio.h>
#define PI 3.14159

int main() {
    float r, a;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    a = PI * r * r;
    printf("Area of circle = %.2f\n", a);
    return 0;
}