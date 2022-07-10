// WAP to read n numbers and store them in array
// Display them sorting in descending order
#include<stdio.h>

int main() {
    int n, i, j, a;

    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    int numbers[n];

    for (i = 0; i < n; i++) {
        printf("%d. Enter number: ", i+1);
        scanf("%d", &numbers[i]);
    }

    // descending
    for (i = 0; i < n; i++) {     
        for (j = i + 1; j < n; j++) {     
            if (numbers[i] < numbers[j]) {
                a = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = a;
            }    
        }
    }

    printf("The numbers in descending order is:\n");
    for (i = 0; i < n; i++) {
      printf("%d \n", numbers[i]);
    }

    return 0;
}