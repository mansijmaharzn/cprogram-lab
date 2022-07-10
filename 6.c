// WAP to read 4 by 4 matrix and display sum of all elements
// except diagonal elements of matrix and display the 
// multiplication of diagonal element

// Note: if i == j: diagonal

#include<stdio.h>

#define row 4
#define column 4
int main() {
    int a[4][4];
    int i, j;
    int sum=0, multiplication=1;

    // Inputs
    printf("Enter Values For Matrix:\n");
    for (i=0; i < row; i++) {
        printf("For number %d row: \n", i+1);
        for (j=0; j < column; j++) {
            printf("Enter for number %d column: ", j+1);
            scanf("%d", &a[i][j]);
        }
    }

    // Process
    for (i=0; i < row; i++) {
        for (j=0; j < column; j++) {
            if (i==j)
                multiplication *= a[i][j];
            else
                sum += a[i][j];
        }
    }

    printf("The matrix: \n");
    for (i=0; i < row; i++) {
        for (j=0; j < column; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication of diagonal elements: %d \n", multiplication);
    printf("Sum of other elements: %d", sum);
    
    return 0;
}