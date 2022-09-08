// transpose of a matrix
#include <stdio.h>
int main() {
    int a[10][10], transpose[10][10], row, column;
    int i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &column);

    // input
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // printing matrix a
    printf("\nEntered matrix: \n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // computing transpose
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
            transpose[j][i] = a[i][j]; // main logic here
        }
    }

    // printing the transpose
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
            printf("%d  ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}