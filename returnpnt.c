#include<stdio.h>
int* getElement(int a[],int index) {
    return &arr[index];
}
int main() {
    int arr[5]={4,8,12,16,20};
    int *ptr = getElement(arr,2);
    
}