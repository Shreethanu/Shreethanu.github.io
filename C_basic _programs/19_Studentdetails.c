#include <stdio.h>

// Define the structure for a student
typedef struct {
    char name[50];
    int rollNumber;
    float marks;
} Student;

// Function prototypes
void readStudentRecords(Student students[], int n);
void displayStudentRecords(Student students[], int n);

int main() {
    int n;

    // Read number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of Student structures
    Student students[n];

    // Read student records
    readStudentRecords(students, n);

    // Display student records
    displayStudentRecords(students, n);

    return 0;
}

// Function to read student records
void readStudentRecords(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}

// Function to display student records
void displayStudentRecords(Student students[], int n) {
    printf("\nStudent Records:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }
}
