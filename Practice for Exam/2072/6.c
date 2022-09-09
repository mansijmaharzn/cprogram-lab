// WAP to find the sum of each row of 3 by 2 matrix
#include<stdio.h>

int main() {
    int row=3, column=2;
    int a[row][column];
    int i, j, sum;

    for (i=0; i<row; i++) {
        for (j=0; j<column; j++) {
            printf("Enter value for a[%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for (i=0; i<row; i++) {
        sum = 0;
        for (j=0; j<column; j++) {
            sum += a[i][j];
        }
        printf("Sum of row %d is %d\n", i+1, sum);
    }

    return 0;
}