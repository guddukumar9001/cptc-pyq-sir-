//20. Write a program to print all prime numbers. 
#include <stdio.h>

int main() {
    int num; // declare variable to store the number

    printf("Enter a number: ");
    scanf("%d", &num); // input the number from the user

    printf("Prime numbers up to %d are:\n", num);

    for (int i = 2; i <= num; i++) {
        int is_prime = 1; // assume the number is prime

        // check if the number is divisible by any number up to its square root
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0; // the number is not prime
                break;
            }
        }

        if (is_prime) {
            printf("%d ", i); // print the prime number
        }
    }

    printf("\n");

    return 0;
}