/*
3. Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.
*/

#include <stdio.h>

typedef struct {

    int rollNo;
    char name[50];
    float physics;
    float math;
    float chemistry;

} Student;

void printSummary(Student student) {

    float totalMarks = student.physics + student.math + student.chemistry;
    float percentage = (totalMarks / 300.0) * 100.0;

    printf("Roll No: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Physics Marks: %.2f\n", student.physics);
    printf("Math Marks: %.2f\n", student.math);
    printf("Chemistry Marks: %.2f\n", student.chemistry);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
}

int main() {
    Student student;

    printf("Enter Roll No: ");
    scanf("%d", &student.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", student.name);

    printf("Enter Marks of Physics: ");
    scanf("%f", &student.physics);

    printf("Enter Marks of Math: ");
    scanf("%f", &student.math);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &student.chemistry);

    printf("\n");
    printSummary(student);

    return 0;
}