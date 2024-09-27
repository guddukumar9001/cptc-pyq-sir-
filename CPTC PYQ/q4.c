//4. Write a program to find square root of quadratic equation. 
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2; // declare variables

    printf("Enter coefficient a: ");
    scanf("%f", &a); // input coefficient a

    printf("Enter coefficient b: ");
    scanf("%f", &b); // input coefficient b

    printf("Enter coefficient c: ");
    scanf("%f", &c); // input coefficient c

    discriminant = b * b - 4 * a * c; // calculate discriminant

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("The root is: %.2f\n", root1);
    } else {
        printf("The equation has no real roots.\n");
    }

    return 0;
}