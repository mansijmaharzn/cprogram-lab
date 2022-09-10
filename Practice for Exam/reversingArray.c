// n-i-1
#include<stdio.h>

int main() {
    int a[5], i, n=5, firstVal, secondVal;

    for (i=0; i<n; i++) {
        printf("Enter %d: ", i+1);
        scanf("%d", &a[i]);
    }

    for (i=0; i<n/2; i++) {
        firstVal = a[i];
        secondVal = a[n-i-1];
        a[i] = secondVal;
        a[n-i-1] = firstVal;
    }

    printf("Reversed:\n");
    for (i=0; i<n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}