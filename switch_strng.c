#include<stdio.h>
#include<string.h>
int main() {
    char s1[100], s2[100];
    printf("Enter Two strings:\n");
    scanf(" %[^\n]", s1);
    scanf(" %[^\n]", s2);
    char op;
    printf("Enter an operator (l,c,m,p): ");//len,cpy,cmp,cat
    scanf(" %c",&op);
    switch(op)
    {
        case 'l':
            printf("Length of first : %lu\n", strlen(s1));
            printf("Length of second: %lu\n", strlen(s2));
            break;
        case 'c':
            strcpy(s1, s2);
            printf("After copying: %s\n", s1);
            break;
        case 'm':
            int res = strcmp(s1, s2);
            if(res == 0)
                printf("Strings are equal\n");
            else if(res < 0)
                printf("First %s is less than second %s \n",s1,s2);
            else
                printf("First %s is greater than second %s \n",s1,s2);
            break;
        case 'p':
            strcat(s1, s2);
            printf("After concatenation: %s\n", s1);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
