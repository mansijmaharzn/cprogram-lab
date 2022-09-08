// WAP to find sum and average of first n natural numbers
#include<stdio.h>

int main() {
    int n, i, sum=0;
    float average;

    printf("Enter range(n): ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        sum += i;
    }

    average = sum/n;

    printf("Sum: %d\n", sum);
    printf("Average: %f", average);

    return 0;
}