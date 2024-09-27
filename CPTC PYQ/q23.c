//23. Write a C program to read and display the details of student. 
#include <stdio.h>

struct Student {
    char name[50];
    int roll_number;
    char course[50];
    float marks;
};

int main() {
    struct Student student;

    printf("Enter student details:\n");

    printf("Name: ");
    scanf("%s", student.name);

    printf("Roll Number: ");
    scanf("%d", &student.roll_number);

    printf("Course: ");
    scanf("%s", student.course);

    printf("Marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Details:\n");

    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_number);
    printf("Course: %s\n", student.course);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}






//Dusra code hai 

/*#include <stdio.h>

struct Student {
    char name[50];
    int roll_number;
    char course[50];
    float marks;
};

int main() {
    struct Student student;

    printf("Student Details Form\n");
    printf("---------------------\n");

    printf("Enter student details:\n");

    printf("Name: ");
    scanf("%s", student.name);

    printf("Roll Number: ");
    scanf("%d", &student.roll_number);

    printf("Course: ");
    scanf("%s", student.course);

    printf("Marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Details:\n");

    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_number);
    printf("Course: %s\n", student.course);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}*/