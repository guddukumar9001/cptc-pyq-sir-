//16. Write a C program to accept the empcode empname basic- salary of the employees and 
//compute their gross salary formula for gross salary is gross salary-Basic 
//salary+DA+HRA. 
#include <stdio.h>

int main() {
    int empcode; // declare variable to store employee code
    char empname[50]; // declare variable to store employee name
    float basic_salary, da, hra, gross_salary; // declare variables to store salaries

    printf("Enter employee code: ");
    scanf("%d", &empcode); // input employee code from the user

    printf("Enter employee name: ");
    scanf("%s", empname); // input employee name from the user

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary); // input basic salary from the user

    // calculate DA (Dearness Allowance) as 10% of basic salary
    da = basic_salary * 0.1;

    // calculate HRA (House Rent Allowance) as 20% of basic salary
    hra = basic_salary * 0.2;

    // calculate gross salary using the formula: gross salary = basic salary + DA + HRA
    gross_salary = basic_salary + da + hra;

    printf("Employee Code: %d\n", empcode);
    printf("Employee Name: %s\n", empname);
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("DA (10%% of basic salary): %.2f\n", da);
    printf("HRA (20%% of basic salary): %.2f\n", hra);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}