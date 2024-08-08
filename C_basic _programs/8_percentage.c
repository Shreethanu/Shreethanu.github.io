#include <stdio.h>

int main() {
    float percentage;

    printf("Enter the percentage of marks: ");
    scanf("%f", &percentage);

    if (percentage >= 70) {
        printf("Distinction\n");
    } else if (percentage >= 60) {
        printf("First Class\n");
    } else if (percentage >= 50) {
        printf("Second Class\n");
    } else if (percentage >= 40) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
