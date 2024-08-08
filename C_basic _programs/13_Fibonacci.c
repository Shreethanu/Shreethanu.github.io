#include <stdio.h>

int main() {
    int n;
    
    // Read the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Number of terms should be positive.\n");
        return 1;
    }

    // Variables to store the first two Fibonacci numbers
    int a = 0, b = 1, next;

    printf("Fibonacci Series: \n");

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", a);
        } else if (i == 1) {
            printf("%d ", b);
        } else {
            next = a + b;
            a = b;
            b = next;
            printf("%d ", next);
        }
    }
    printf("\n");

    return 0;
}
