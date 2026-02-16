#include <stdio.h>
int main () {
    FILE *fp;
    fp = fopen("charfile.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    if ( fp == NULL ) {
        printf( "Unable to open file!\n" );
        return 1;
    }
    fputc('A',fp);
    fputc('B',fp);
    fputc('C',fp);
    fclose(fp);
    printf("Characters written successfully.\n");
    return 0;
}