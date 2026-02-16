#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr = malloc(3 * sizeof(int));
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    /* initialize first 3 elements */
    for (int i = 0; i < 3; ++i) {
        ptr[i] = i + 1;
    }

    /* resize to hold 5 integers */
    int *tmp = realloc(ptr, 5 * sizeof(int));
    if (tmp == NULL) {
        free(ptr);
        fprintf(stderr, "Memory reallocation failed\n");
        return 1;
    }
    ptr = tmp;

    /* initialize the new elements */
    for (int i = 3; i < 5; ++i) {
        ptr[i] = i + 1;
    }

    /* print all 5 elements */
    for (int i = 0; i < 5; ++i) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    return 0;
}
   