#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int rollNo;
    float marks;
} StudentStruct;

void displayStruct(StudentStruct s) {
    printf("Structure:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNo);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    StudentStruct student;

    // Assign values
    strcpy(student.name, "John Doe");
    student.rollNo = 101;
    student.marks = 85.5;

    displayStruct(student);

    return 0;
}
