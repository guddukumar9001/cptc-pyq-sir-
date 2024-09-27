//11. Write a program in C to show following patter:
//* 
//** 
//*** 
//**** 
//***** 

#include <stdio.h>

int main() {
    int i, j, n; // declare variables

    printf("Enter the number of rows: ");
    scanf("%d", &n); // input the number of rows from the user

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*"); // print the asterisks
        }
        printf("\n"); // print a newline
    }

    return 0;
}