/*
        *
      # #
    * * *
  # # # #
* * * * *
*/
#include<stdio.h>

int main() {
    int i, j, k;
    int row=5, column=5;

    for (i=1; i<=row; i++) {
        for (j=column; j>i; j--) {
            printf("  ");
        }
        // printf("%d", j);
        for (k=j; k>=1; k--) {
            if (i%2 == 0) // even row ma # cha, odd ma *
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
