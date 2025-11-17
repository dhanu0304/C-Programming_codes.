#include<stdio.h>
void display(int arr[], int n) 
{
 int i;
 printf("Array elements are:\n");
 for(i=0;i< n ;i++) 
    printf("%d ",arr[i]);
 }
 int main() {
    int arr[5]={1,2,3,4,5};
    display(arr,5);
    return 0;
 }
 