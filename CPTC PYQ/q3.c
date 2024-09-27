//3. Write a C program to find the biggest of given two numbers also for three numbers.
#include <stdio.h>

int main() {
    int num1, num2, max; // declare variables

    printf("Enter first number: ");
    scanf("%d", &num1); // input first number

    printf("Enter second number: ");
    scanf("%d", &num2); // input second number

    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }

    printf("The biggest number is: %d\n", max); // print the biggest number

    return 0;
}