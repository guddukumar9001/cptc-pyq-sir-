//18.  Write a program to produce the following pattern :- 
//4  4  4  4 
//3  3   3 
//2  2 
//1 

#include <stdio.h>

int main() {
    int i, j, n; // declare variables

    printf("Enter the number of rows: ");
    scanf("%d", &n); // input the number of rows from the user

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i); // print the number
        }
        printf("\n"); // print a newline
    }

    return 0;
}
