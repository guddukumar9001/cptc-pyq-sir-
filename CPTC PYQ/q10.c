//10.  Write a program in C to check armstrong number. 
#include <stdio.h>

int main() {
    int num, sum = 0, temp, digit; // declare variables

    printf("Enter a number: ");
    scanf("%d", &num); // input the number from the user

    temp = num; // store the original number in temp

    while (temp != 0) {
        digit = temp % 10; // extract the last digit
        sum += digit * digit * digit; // calculate the cube of the digit and add to sum
        temp /= 10; // remove the last digit
    }

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}