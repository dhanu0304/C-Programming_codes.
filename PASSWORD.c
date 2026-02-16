#include<stdio.h>
#include<string.h>
#include<ctype.h> // Write a c program to validate a password which has minimum one upper case, one numeric, one special character, with Min 8 max 15 characters.Print if the password is weak, moderate or strong.Check if it is valid or not.
int main() {
    char pass[30];
    printf("Password Validation\n");
    printf("Enter your password: ");
    scanf("%s", pass);
    int len = strlen(pass);
    if (len < 8 || len > 15) {
        printf("Password length should be between 8 to 15 characters.\n");
        return 0;
    }
    if (len < 8 ) {
        printf("Password is weak.\n");
    } else if (len > 8 || len <= 10) {
        printf("Password is moderate.\n");
    } else {
        printf("Password is strong.\n");
    }
    int U = 0, D = 0, S = 0;
    for (int i = 0; i < len; i++) {
        if (isupper(pass[i])) 
            U = 1;
        else if (isdigit(pass[i])) 
            D = 1;
        else if (ispunct(pass[i])) 
            S = 1;
    }   
    if (U && D && S) {
        printf("Password is valid\n");
        printf("Password is Created Successfully");
    } else {
        printf("Password is Invalid");
    }
    return 0;
}