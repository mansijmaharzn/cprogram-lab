#include <stdio.h>

void main() {
    int i, j, a, n, counter, ave, number[30];

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for (i = 0; i < n; ++i) {
        scanf("%d", &number[i]);
    }
    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (number[i] < number[j]) {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    
    printf("The 2nd largest number is = %d\n", number[1]);
}