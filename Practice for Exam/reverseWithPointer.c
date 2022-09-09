/* WAP using pointers to read in an array of integers and print its elements
in reverse order */
#include<stdio.h>

int main() {
    int size, i, a[50];
    int *ptr;

    ptr = &a[0];

    printf("Enter size of array: ");
    scanf("%d", &size);

    for (i=0; i<size; i++) {
        printf("Enter %d element: ", i+1);
        scanf("%d", ptr);
        ptr++;
    }

    ptr = &a[size-1];

    printf("Elements in reverse order:\n");
    for (i=0; i<size; i++) {
        printf("%d\n", *ptr);
        ptr--;
    }

    return 0;
}