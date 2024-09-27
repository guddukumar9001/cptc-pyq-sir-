//11. Write a program in C to show following patter: 
//A 
//ABC 
//ABCDE 
//ABCDEFG 
//ABCDEFGHI 
#include <stdio.h>

int main() {
    int i, j, n; // declare variables

    printf("Enter the number of rows: ");
    scanf("%d", &n); // input the number of rows from the user

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1); // print the alphabet
        }
        printf("\n"); // print a newline
    }

    return 0;
}