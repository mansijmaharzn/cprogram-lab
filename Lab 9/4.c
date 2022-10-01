// WAP to copy elements of one array to another using pointers
#include<stdio.h>

int main() {
    int arrayOne[5], arrayTwo[5];
    int i;
    int *ptr;

    printf("\nEnter array elements (5 integer values):");
    for(i=0;i<5;i++)
        scanf("%d",&arrayOne[i]);

    /* array is equal to base address
    * array = &array[0] */
    ptr = arrayOne;

    for(i=0;i<5;i++) {
        //*ptr refers to the value at address
        arrayTwo[i] = *ptr;
        ptr++;
    }

    printf("The second array elements are:");
    for(i=0; i<5; i++)
        printf("%d ", arrayTwo[i]);

    return 0;
}
