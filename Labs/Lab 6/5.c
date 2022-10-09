// WAP to read matrix and display the content of matrix
// Also display the traspose of given matrix
#include<stdio.h>

int main() {
    int a[3][3], transpose[3][3];
    int i, j, k, result;
    int row=3, column=3;

    // Inputs
    printf("3 by 3 matrix:");
    for (i=0; i < row; i++) {
        printf("For number %d row: \n", i+1);
        for (j=0; j < column; j++) {
            printf("Enter for number %d column: ", j+1);
            scanf("%d", &a[i][j]);
        }
    }

    // Calculating Transpose
    for (i=0; i < row; i++) {
        for (j=0; j < column; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    // Printing Results
    printf("Entered Matrix: \n");
    for (i=0; i < row; i++) {
        for (j=0; j < column; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Transposed Matrix: \n");
    for (i=0; i < row; i++) {
        for (j=0; j < column; j++) {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}