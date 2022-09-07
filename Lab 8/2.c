// WAP to add 3 by 3 matrix and print the result
#include<stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3];
    int i, j, k, result;
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

    // Process
    for (i=0; i < row; i++) {
        for (j=0; j < column; j++) {
            c[i][j] = a[i][j] + b[i][j];
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