/* Program to print following pattern-
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1 */
#include<stdio.h>

int main() {
    int i, j, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        for(j=0; j<i; j++) {
            if((i+j)%2==0) {
                printf(" 0");
            } else {
                printf(" 1");
            }
        }
        printf("\n");
    }

    return 0;
}