// WAP to read two 3*3 matrixes and multiply them
// and store them in another matrix and
// display the resulting matrix
#include<stdio.h>

int main() {
    int i, j, k;
    int a[3][3], b[3][3], mul[3][3];

    printf("Enter elements of first matrix:\n");
    for(i=0;i< 3;i++){
        for(j=0;j< 3;j++){
            printf("a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
 
    printf("Enter elements of second matrix:\n");
    for(i=0;i< 3;i++){
        for(j=0;j< 3;j++){
            printf("b[%d][%d]: ",i,j);
            scanf("%d", &b[i][j]);
        }
    }
 
    for(i=0;i< 3;i++){
        for(j=0;j< 3;j++){
            mul[i][j] = 0;
            for(k=0;k<3;k++){
                mul[i][j] = mul[i][j] + a[i][k]*b[k][j];
            } // 0+3*7+12*11+4*6
        }     // 0+3*3+12*9+4*8
              // 0+3*8+12*5+4*4
    }
    
    printf("Multiplied matrix is:\n");
    for(i=0;i< 3;i++){
        for(j=0;j< 3;j++){
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
