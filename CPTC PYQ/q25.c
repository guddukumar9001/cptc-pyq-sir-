/*25.  If ages of Ram, Shyam and Ajay are input through the keyboard. Write a program to 
determine the youngest of the three.*/


#include <stdio.h>

int main() {
    int ram_age, shyam_age, ajay_age;

    printf("Enter Ram's age: ");
    scanf("%d", &ram_age);

    printf("Enter Shyam's age: ");
    scanf("%d", &shyam_age);

    printf("Enter Ajay's age: ");
    scanf("%d", &ajay_age);

    int youngest_age = (ram_age < shyam_age) ? ram_age : shyam_age;
    youngest_age = (youngest_age < ajay_age) ? youngest_age : ajay_age;

    if (ram_age == youngest_age) {
        printf("Ram is the youngest.\n");
    } else if (shyam_age == youngest_age) {
        printf("Shyam is the youngest.\n");
    } else {
        printf("Ajay is the youngest.\n");
    }

    return 0;
}