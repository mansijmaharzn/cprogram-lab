#include<stdio.h>

int main() {
    int a[4][4], b[4][4];
    int i, j, k, temp;
    int row=4, column=4;

    // Inputs
    printf("4 by 4 matrix:");
    for (i=0; i < row; i++) {
        printf("For number %d row: \n", i+1);
        for (j=0; j < column; j++) {
            printf("Enter for number %d column: ", j+1);
            scanf("%d", &a[i][j]);
        }
    }

    // Sorting
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
            for (k = (j + 1); k < column; ++k){
                if (a[i][j] > a[i][k]) {
                    temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }

    // Printing
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}