// WAP to calculate sum of digits of a number
#include<stdio.h>

int main() {
    int num, t, remainder, sum=0;

    printf("Enter number: ");
    scanf("%d", &num);

    t = num;
    while (t != 0) {
        remainder = t % 10;
        sum += remainder;
        t /= 10; // (t = t / 10)
    }

    printf("Sum of digits of %d is: %d", num, sum);

    return 0;
}