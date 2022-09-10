// WAP to calculate the sum of squares of positive diagonal elements
// of n by n matrix
#include<stdio.h>

int main() {
    int row=3, column=3, sum=0, square=0;
    int a[row][column];
    int i, j;

    for (i=1; i<=row; i++) {
        printf("Enter for row: %d\n", i);
        for (j=1; j<=column; j++) {
            printf("Enter for column %d: ", j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i=1; i<=row; i++) {
        for (j=1; j<=column; j++) {
            if (i==j) { // diagonal element cuz i==j indicates diagonal element
                if (a[i][j] > 0) {
                    square = a[i][j] * a[i][j];
                    sum += square;
                }
            }
        }
    }

    printf("Sum of squares of positive diagonal elements: %d", sum);

    return 0;
}