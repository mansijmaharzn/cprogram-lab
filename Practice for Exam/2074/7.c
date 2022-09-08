// WAP to compute the sum of the digits of a given integer number
#include <stdio.h>

int main(){
    int n, t, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    t = n;

    while (t != 0) {
        remainder = t % 10;
        sum += remainder;
        t = t / 10;
    }

    printf("Sum of digits of %d = %d\n", n, sum);

    return 0;
}