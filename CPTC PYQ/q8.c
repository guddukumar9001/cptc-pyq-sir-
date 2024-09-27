//8. Write a C program to check odd or even. 
#include <stdio.h>

int main() {
    int num; // declare variable to store the input number

    printf("Enter a number: ");
    scanf("%d", &num); // input the number from the user

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}