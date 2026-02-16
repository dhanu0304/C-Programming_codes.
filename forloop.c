#include<stdio.h>
int main() {
        int n, sum ,count, i;
        printf("Enter a number: ");
        scanf("%d", &n);
        for(i=n;i<=10;i++) {
            sum= n + i;
            printf("%d\n", n, i, sum);        
        }
        return 0;               
}