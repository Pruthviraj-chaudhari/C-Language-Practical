// 6. Write a C program to calculate the sum of two matrices.
// Objective: Explore multi-dimensional arrays and matrix operations.

#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &m, &n);

    int mat1[m][n], mat2[m][n], sum[m][n];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Adding matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
