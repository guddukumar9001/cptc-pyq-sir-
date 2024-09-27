//15. Write a C program year is leap year or not. 
#include <stdio.h>

int main() {
    int year; // declare variable

    printf("Enter a year: ");
    scanf("%d", &year); // input the year from the user

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}