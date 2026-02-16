#include<stdio.h>
#include<string.h>
int main() {
    char s1[100] = "Hello, ";
    char s2[100] = "World!";
    printf("Length of s1: %lu\n", strlen(s1));
    strcat(s1, s2);
    printf("After concatenation: %s\n", s1);
    strcpy(s1, s2);
    printf("After copying s2 to s1: %s\n", s1);
    int cmp = strcmp(s1, s2);
    printf("Comparison result between s1 and s2: %d\n", cmp);
    return 0;
}