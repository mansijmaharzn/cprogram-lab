// WAP to display first n prime numbers
#include<stdio.h>

int main() {
    int n, i, j, flag;

    printf("Enter range(n): ");
    scanf("%d", &n);

    for (i=2; i<=n; i++) { // starting from 2 cuz 0 and 1 are non-prime numbers
        flag = 0;
        for (j=1; j<=n; j++) {
            if (i%j==0) // not prime number
                flag++;
        }
        if (flag==2)
            printf("%d is a prime number.\n", i);
    }

    return 0;
}