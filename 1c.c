#include<stdio.h>
int main() {
    FILE *fp;
    fp = fopen( "data.txt", "r" );
    if ( fp == NULL ) {
        printf( "File not found!\n" );
        return 1;
    }
    fprintf(fp, "THIS LINE IS APPENDED TO THE FILE.\n");
    fclose(fp); 
    printf("Data appended successfully.\n");
    return 0;
}