// WAP to read n numbers, store it in an Array
// Count the even numbers & display the sum of oddNumbers
#include<stdio.h>

int main() {
    int n, i;
    int sumOfOddNumbers=0, countOfEvenNumbers=0; 

    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    int numbers[n];

    for (i=0; i<n; i++) {
        printf("%d. Enter number(nonNegative): ", i+1);
        scanf("%d", &numbers[i]);
    }

    for (i=0; i<n; i++) {
        if (numbers[i] % 2 == 0)
            // even
            countOfEvenNumbers += 1;
        else
            // odd
            sumOfOddNumbers += numbers[i];
    }

    printf("Total number of evenNumbers: %d \n", countOfEvenNumbers);
    printf("Sum of all odd numbers: %d", sumOfOddNumbers);

    return 0;
}