#include <stdio.h>

int main() {
    int n;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Array to store the elements
    int array[n];
    int i, j, k;

    // Read the elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Remove duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (array[i] == array[j]) {
                // Shift elements to remove the duplicate
                for (k = j; k < n - 1; k++) {
                    array[k] = array[k + 1];
                }
                n--; // Decrease the size of the array
                j--; // Stay at the current index for checking new elements
            }
        }
    }

    // Print the array after removing duplicates
    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
