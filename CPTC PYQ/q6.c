//6. Write a C program to finding area of triangle, square, rectangle. 
#include <stdio.h>

int main() {
    int choice; // declare variable to store user's choice

    printf("Choose a shape to find its area:\n");
    printf("1. Triangle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice); // input user's choice

    if (choice == 1) {
        // find area of triangle
        float base, height, area;
        printf("Enter base of triangle: ");
        scanf("%f", &base);
        printf("Enter height of triangle: ");
        scanf("%f", &height);
        area = 0.5 * base * height;
        printf("Area of triangle = %.2f\n", area);
    } else if (choice == 2) {
        // find area of square
        float side, area;
        printf("Enter side of square: ");
        scanf("%f", &side);
        area = side * side;
        printf("Area of square = %.2f\n", area);
    } else if (choice == 3) {
        // find area of rectangle
        float length, width, area;
        printf("Enter length of rectangle: ");
        scanf("%f", &length);
        printf("Enter width of rectangle: ");
        scanf("%f", &width);
        area = length * width;
        printf("Area of rectangle = %.2f\n", area);
    } else {
        printf("Invalid choice. Please choose 1, 2, or 3.\n");
    }

    return 0;
}