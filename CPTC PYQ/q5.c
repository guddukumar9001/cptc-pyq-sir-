//5. Write a C program to print natural number from 1 to n. n is value taken by user (take n = 5). 
#include <stdio.h>

int main() {
    int n, i; // declare variables

    printf("Enter a positive integer: ");
    scanf("%d", &n); // input n from the user

    printf("Natural numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i); // print the natural numbers
    }

    printf("\n");

    return 0;
}