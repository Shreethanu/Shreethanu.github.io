#include <stdio.h>

#define MAX 10  // Define maximum size for matrices

// Function prototypes
void readMatrix(int matrix[MAX][MAX], int n, int m);
void displayMatrix(int matrix[MAX][MAX], int n, int m);
void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int n, int m);

int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    int n, m;

    // Read dimensions of the matrices
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);

    // Read the two matrices
    printf("Enter elements for matrix 1:\n");
    readMatrix(matrix1, n, m);

    printf("Enter elements for matrix 2:\n");
    readMatrix(matrix2, n, m);

    // Add the matrices
    addMatrices(matrix1, matrix2, result, n, m);

    // Display the matrices and their sum
    printf("Matrix 1:\n");
    displayMatrix(matrix1, n, m);

    printf("Matrix 2:\n");
    displayMatrix(matrix2, n, m);

    printf("Sum of the matrices:\n");
    displayMatrix(result, n, m);

    return 0;
}

// Function to read a matrix
void readMatrix(int matrix[MAX][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[MAX][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
