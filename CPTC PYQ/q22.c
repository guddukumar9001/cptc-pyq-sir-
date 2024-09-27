//22. Write a C program to compute fibbonacci series up to five terms.
#include <stdio.h>

int main() {
    int num1 = 0, num2 = 1, num3; // declare variables to store Fibonacci numbers
    int i; // declare variable to use as loop counter

    printf("Fibonacci Series up to 5 terms:\n");

    // print the first two Fibonacci numbers
    printf("%d %d ", num1, num2);

    // compute and print the remaining Fibonacci numbers
    for (i = 3; i <= 5; i++) {
        num3 = num1 + num2; // calculate the next Fibonacci number
        printf("%d ", num3);
        num1 = num2; // update num1 for the next iteration
        num2 = num3; // update num2 for the next iteration
    }

    printf("\n");

    return 0;
} 



/*#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int i; // declare variable to use as loop counter

    printf("Fibonacci Series up to 5 terms:\n");

    // print the first five Fibonacci numbers
    for (i = 0; i < 5; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;
}*/