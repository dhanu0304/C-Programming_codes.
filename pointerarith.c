#include <stdio.h>

int main(void)
{
    int arr[] = {5, 10, 15, 20, 25};
    int *ptr = arr;
    printf("ptr = %p, *ptr = %d\n", (void*)ptr, *ptr);

    ptr++; /* adds sizeof(int) */
    printf("After ptr++: ptr = %p, *ptr = %d\n", (void*)ptr, *ptr);

    ptr += 2;
    printf("After ptr+=2: ptr = %p, *ptr = %d\n", (void*)ptr, *ptr);

    printf("*ptr = %d\n", *ptr);

    return 0;
}