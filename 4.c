#include<stdio.h> // Define an enumeration for the days of the week 
enum Week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
int main() {
    enum Week day ;
    day = Wednesday;
    printf("The value of day is: %d\n", day);
    return 0;
}