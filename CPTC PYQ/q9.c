//9. Write a C program to swap the value of two variable without using temporary variable. 
#include <stdio.h>

int main() {
    int a, b; // declare two variables

    printf("Enter value of a: ");
    scanf("%d", &a); // input value of a

    printf("Enter value of b: ");
    scanf("%d", &b); // input value of b

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // swap values without using temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}