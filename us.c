#include<stdio.h>
#include<string.h>
#define MAX_USERNAME_LENGTH 7
int main()
{
    char password["Dhanu77" +1];
    printf("Username = Dhananjaya\n");
    printf("Enter your password: ");
    scanf("%s",password);
    if(strcmp(password, "Dhanu77") == 0)
    {
        printf("Password is correct,Access Granted\n");
    }
    else
    {
        printf("Access Denied\n");
    }       
}