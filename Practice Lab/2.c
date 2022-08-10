#include<stdio.h>
#include<math.h>

int main() {
    int a[2][2], norm[2]={0};
    int row=2, col=2;
    int i, j, max;

    // Inputs
    printf("2 by 2 matrix:");
    for (i = 0; i < row; i++) {
        printf("For number %d row: \n", i+1);
        for (j = 0; j < col; j++) {
            printf("Enter for number %d column: ", j+1);
            scanf("%d", &a[i][j]);
        }
    }

    // Calculations
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            norm[i] = norm[i] + a[j][i];
        }
    }

    max = norm[0];
    for (i = 0; i < col; i++) {
        if (max < norm[i]) {
            max = norm[i];
        }
    }

    // Outputs
    printf("Max: ");
    for (i = 0; i < col; i++) {
        printf("%d ", norm[i]);
    }

    printf("\nNorm of the given matrix is %d\n", max);

    return 0;
}