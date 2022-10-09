// WAP to read two sets of 10 numbers
// And add the corresponding indexes and store in new array
#include<stdio.h>

int main() {
    int a[10], b[10], c[10];
    int i, j, k, result;

    // Inputs
    printf("For first set!!!\n");
    for (i = 0; i < 10; i++) {
        printf("%d. Enter number: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("For second set!!!\n");
    for (i = 0; i < 10; i++) {
        printf("%d. Enter number: ", i+1);
        scanf("%d", &b[i]);
    }

    // Process
    for (j=0; j<10; j++) {
        result = a[j] + b[j];
        c[j] = result;
    }

    // Output
    printf("Results: \n");
    for (k=0; k < 10; k++) {
        printf("%d + %d = %d \n",a[k], b[k], c[k]);
    }

    return 0;
}