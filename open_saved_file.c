// Write a C program to open a saved file ( a file can be text,word,pdf using url/path) which contains user information.
#include <stdio.h>
#include <stdlib.h>
int main() {
    char path[100];
    printf("Enter the path of the file to open: ");
    scanf("%s", path);
    system(path);
    return 0;
}
