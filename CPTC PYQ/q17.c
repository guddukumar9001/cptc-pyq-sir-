//17. Write a C program to calculate simple interest. 
#include <stdio.h>

int main() {
    float principal, rate, time, interest; // declare variables to store principal, rate, time, and interest

    printf("Enter principal amount: ");
    scanf("%f", &principal); // input principal amount from the user

    printf("Enter rate of interest (in percent): ");
    scanf("%f", &rate); // input rate of interest from the user

    printf("Enter time (in years): ");
    scanf("%f", &time); // input time from the user

    // calculate simple interest using the formula: interest = (principal * rate * time) / 100
    interest = (principal * rate * time) / 100;

    printf("Principal Amount: %.2f\n", principal);
    printf("Rate of Interest: %.2f%%\n", rate);
    printf("Time (in years): %.2f\n", time);
    printf("Simple Interest: %.2f\n", interest);

    return 0;
}
