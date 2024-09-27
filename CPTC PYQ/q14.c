//14. Write a program in C to print frist ten fibonacci nimbers C.
#include <stdio.h>

long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int num; // declare variable

    printf("Enter a number: ");
    scanf("%d", &num); // input the number from the user

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }

    return 0;
}