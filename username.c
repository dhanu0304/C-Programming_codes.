#include<stdio.h>
#include<string.h>
int main()
{
    char password[];
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
    return 0;
}
