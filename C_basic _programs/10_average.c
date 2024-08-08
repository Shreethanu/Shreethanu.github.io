#include <stdio.h>

int main() {
    int n;

    // Read the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Array to store marks
    float marks[n];
    float sum = 0.0;

    // Read marks for each student
    printf("Enter marks for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    // Calculate average
    float average = sum / n;

    // Display the average
    printf("Average mark: %.2f\n", average);

    return 0;
}
