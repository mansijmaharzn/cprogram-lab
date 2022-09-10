// WAP to obtain product of all elements except
// the diagonal elements
#include<stdio.h>

int main() {
    int row=3, column=3;
    int a[row][column];
    int i, j;
    int result=1; // initializing 1 because 0 times anything == 0

    for (i=1; i<=row; i++) {
        printf("Enter for row: %d\n", i);
        for (j=1; j<=column; j++) {
            printf("Enter for column %d: ", j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i=1; i<=row; i++) {
        for (j=1; j<=column; j++) {
            if (i!=j) // not diagonal element cuz i==j indicates diagonal element
                result *= a[i][j];
        }
    }

    printf("Product of elements except diagonal elements: %d", result);

    return 0;
}