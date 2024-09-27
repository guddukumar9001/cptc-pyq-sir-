//21. Write a c program to find the sum and average of given five numbers.
#include <stdio.h>

int main() {
    int num[5]; // declare array to store five numbers
    int sum = 0; // declare variable to store sum
    float average; // declare variable to store average

    printf("Enter five numbers:\n");

    // input numbers from the user
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
        sum += num[i]; // add number to sum
    }

    // calculate average
    average = (float)sum / 5;

    printf("\nNumbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: %d\n", i + 1, num[i]);
    }

    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}