// WAP to multiply 3 by 3 matrix and print the result
#include<stdio.h>

int main() {
    int a[3][3], b[3][3], c[3];
    int i, j, k, sum;
    int row=3, column=3;

    // Inputs
    printf("For FIRST Matrix:\n");
    for (i=0; i < row; i++) {
        for (j=0; j < column; j++) {
            printf("a[%d][%d]", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("For SECOND Matrix:\n");
    for (i=0; i < row; i++) {
        for (j=0; j < column; j++) {
            printf("b[%d][%d]", i+1, j+1);
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
            c[i] = sum;
        }
    }

    // Output
    printf("Results: \n");
    for (i=0; i < row; i++) {
        printf("%d \n",c[i]);
    }

    return 0;
}