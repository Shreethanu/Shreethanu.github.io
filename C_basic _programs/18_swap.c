#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a; // Store the value at address a in temp
    *a = *b;   // Copy the value at address b to address a
    *b = temp; // Copy the value stored in temp to address b
}

int main() {
    int num1, num2;

    // Read two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display original values
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the numbers
    swap(&num1, &num2);

    // Display swapped values
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
