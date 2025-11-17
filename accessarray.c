#include <stdio.h>
int main() {
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    printf("Array elements are:\n");
    for(int i=0;i<5;i++) 
        printf("%d ", *(p+i));
    return 0;
}