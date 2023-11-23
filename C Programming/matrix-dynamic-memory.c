#include <stdio.h>
#include <stdlib.h>

int main() {
    // Define the number of rows and columns for the two matrices
    int a_r, a_c, b_r, b_c, i, j, k;
    int **a, **b, **c;

    // Prompt the user to enter the dimensions for the first matrix
    printf("Enter rows and columns for matrix one: ");
    scanf("%d%d", &a_r, &a_c);

    // Prompt the user to enter the dimensions for the second matrix
    printf("\nEnter rows and columns for matrix two: ");
    scanf("%d%d", &b_r, &b_c);

    // Check if the number of columns in the first matrix is equal to the number of rows in the second matrix
    // This is a requirement for matrix multiplication
    if (a_c != b_r) {
        printf("\nCannot multiply matrices with these dimensions.\n");
        return 1;
    }

    // Allocate memory for matrix one
    a = (int **)malloc(sizeof(int *) * a_r);
    for (i = 0; i < a_r; i++) {
        a[i] = (int *)malloc(sizeof(int) * a_c);
    }

    // Allocate memory for matrix two
    b = (int **)malloc(sizeof(int *) * b_r);
    for (i = 0; i < b_r; i++) {
        b[i] = (int *)malloc(sizeof(int) * b_c);
    }

    // Allocate memory for the product matrix
    c = (int **)malloc(sizeof(int *) * a_r);
    for (i = 0; i < a_r; i++) {
        c[i] = (int *)malloc(sizeof(int) * b_c);
    }

    // Prompt the user to enter the elements for the first matrix
    printf("\nEnter matrix one (%d by %d):\n", a_r, a_c);
    for (i = 0; i < a_r; i++) {
        for (j = 0; j < a_c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Prompt the user to enter the elements for the second matrix
    printf("\nEnter matrix two (%d by %d):\n", b_r, b_c);
    for (i = 0; i < b_r; i++) {
        for (j = 0; j < b_c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize product matrix
    for (i = 0; i < a_r; i++) {
        for (j = 0; j < b_c; j++) {
            c[i][j] = 0;
        }
    }

    // Multiply matrix one and matrix two
    for (i = 0; i < a_r; i++) {
        for (j = 0; j < b_c; j++) {
            for (k = 0; k < a_c; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    // Display result
    printf("\nProduct of matrix one and two is:\n");
    for (i = 0; i < a_r; i++) {
        for (j = 0; j < b_c; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (i = 0; i < a_r; i++) {
        free(a[i]);
    }
    free(a);

    for (i = 0; i < b_r; i++) {
        free(b[i]);
    }
    free(b);

    for (i = 0; i < a_r; i++) {
        free(c[i]);
    }
    free(c);

    return 0;
}
