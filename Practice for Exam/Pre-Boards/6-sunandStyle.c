// WAP to obtain product of all elements except
// the diagonal elements
#include<stdio.h>

int main() {
    int row=3, column=3;
    int a[row][column];
    int i, j;
    int result=1; // initializing 1 because 0 times anything == 0

    a[0][0] = 0;
    a[0][1] = 6;
    a[0][2] = -8;
    a[1][0] = 9;
    a[1][1] = 2;
    a[1][2] = 3;
    a[2][0] = 2;
    a[2][1] = 8;
    a[2][2] = 0;

    for (i=0; i<row; i++) {
        for (j=0; j<column; j++) {
            if (i!=j) // not diagonal element cuz i==j indicates diagonal element
                result *= a[i][j];
        }
    }

    printf("Product of elements except diagonal elements: %d", result);

    return 0;
}