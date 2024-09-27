//7. Write a program in C to find the area and perimeter of a circle using switch case. 
#include <stdio.h>
#include <math.h>

int main() {
    float radius, area, perimeter; // declare variables
    int choice; // declare variable to store user's choice

    printf("Choose an option:\n");
    printf("1. Find area of circle\n");
    printf("2. Find perimeter of circle\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice); // input user's choice

    printf("Enter radius of circle: ");
    scanf("%f", &radius); // input radius

    switch (choice) {
        case 1:
            // find area of circle
            area = M_PI * radius * radius;
            printf("Area of circle = %.2f\n", area);
            break;
        case 2:
            // find perimeter of circle
            perimeter = 2 * M_PI * radius;
            printf("Perimeter of circle = %.2f\n", perimeter);
            break;
        default:
            printf("Invalid choice. Please choose 1 or 2.\n");
    }

    return 0;
}