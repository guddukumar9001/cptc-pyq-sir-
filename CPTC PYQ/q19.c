//19. Write a program to find the average temperature of five sunny days.

#include <stdio.h>

int main() {
    float temperature[5]; // declare array to store temperatures
    float sum = 0; // declare variable to store sum of temperatures
    float average; // declare variable to store average temperature

    printf("Enter the temperatures for five sunny days:\n");

    // input temperatures from the user
    for (int i = 0; i < 5; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &temperature[i]);
        sum += temperature[i]; // add temperature to sum
    }

    // calculate average temperature
    average = sum / 5;

    printf("\nTemperatures:\n");
    for (int i = 0; i < 5; i++) {
        printf("Day %d: %.2f\n", i + 1, temperature[i]);
    }

    printf("\nAverage Temperature: %.2f\n", average);

    return 0;
}