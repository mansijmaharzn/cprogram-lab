// WAP to read two 3*3 matrixes and multiply them
// and store them in another matrix and
// display the resulting matrix
#include<stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3];
    int i, j, k, sum;
    int row=3, column=3;

    // Inputs
    printf("For FIRST Matrix:\n");
    for (i=0; i < row; i++) {
        printf("For number %d row: \n", i+1);
        for (j=0; j < column; j++) {
            printf("Enter for number %d column: ", j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("For SECOND Matrix:\n");
    for (i=0; i < row; i++) {
        printf("For number %d row: \n", i+1);
        for (j=0; j < column; j++) {
            printf("Enter for number %d column: ", j+1);
            scanf("%d", &b[i][j]);
        }
    }

    // Multiplication
    for (i=0; i < row; i++) {
        for (j=0; j < column; j++) {
            sum = 0;
            for (k=0; k < column; k++) {
                sum += a[i][k] * b[k][i];
            }
            c[i][j] = sum;
        }
    }

    // Output
    printf("Results: \n");
    for (i=0; i < row; i++) {
        for (j=0; j < column; j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}