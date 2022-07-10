// WAP to read n numbers and store them in an array and display
// largest and smallest number

#include<stdio.h>

int main() {
    int i, n;
    int largest, smallest;

    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    int numbers[n];

    for (i=0; i<n; i++) {
        printf("%d. Enter number: ", i+1);
        scanf("%d", &numbers[i]);
    }

    largest = smallest = numbers[0];

    for(i=0; i<n; i++) {
        if (largest<numbers[i])
            largest = numbers[i];
        else if (smallest>numbers[i])
            smallest = numbers[i];
    }

    printf("Largest: %d \n", largest);
    printf("Smallest: %d", smallest);

    return 0;
}