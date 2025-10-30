#include<stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if(n%2==0) {
        printf("%d is an Even number\n",n);
    }
    else {
        printf("%d is an Odd number\n",n);
    }
    return 0;
}