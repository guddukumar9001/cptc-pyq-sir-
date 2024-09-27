//13. Write a C program to calculate factorial of a number take user input. 
#include <stdio.h>

int main() {
    int num, i; // declare variables
    long long factorial = 1; // declare variable to store factorial

    printf("Enter a number: ");
    scanf("%d", &num); // input the number from the user

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else if (num == 0 || num == 1) {
        printf("Factorial of %d = 1\n", num);
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i; // calculate factorial
        }
        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}