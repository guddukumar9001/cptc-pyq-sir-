//2. Write a C program to find the sum and average of given three numbers from the.
#include <stdio.h>

int main() {
    float num1, num2, num3, sum, average; // declare variables

    printf("Enter first number: ");
    scanf("%f", &num1); // input first number

    printf("Enter second number: ");
    scanf("%f", &num2); // input second number

    printf("Enter third number: ");
    scanf("%f", &num3); // input third number

    sum = num1 + num2 + num3; // calculate sum
    average = sum / 3.0; // calculate average

    printf("Sum = %.2f\n", sum); // print sum
    printf("Average = %.2f\n", average); // print average

    return 0;
}