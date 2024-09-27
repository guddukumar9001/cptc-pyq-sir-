//12. Write a program to print all prime numbers from 1to50. 
#include <stdio.h>

int main() {
    int i, j, flag; // declare variables

    printf("Prime numbers from 1 to 50 are:\n");

    for (i = 2; i <= 50; i++) {
        flag = 0; // initialize flag to 0
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1; // set flag to 1 if i is divisible by j
                break;
            }
        }
        if (flag == 0) {
            printf("%d ", i); // print i if it is prime
        }
    }

    printf("\n");

    return 0;
}