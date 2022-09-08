// WAP to add 2 matrixes using array
#include<stdio.h>

int main() {
    int row=3, column=3;
    int a[row][column], b[row][column], c[row][column];
    int i, j;

    printf("First Matrix:\n");
    for (i=0; i<row; i++) {
        for (j=0; j<column; j++) {
            printf("Enter for a[%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Second Matrix:\n");
    for (i=0; i<row; i++) {
        for (j=0; j<column; j++) {
            printf("Enter for b[%d][%d]: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    for (i=0; i<row; i++) {
        for (j=0; j<column; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i=0; i<row; i++) {
        for (j=0; j<column; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}