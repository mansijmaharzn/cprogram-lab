/* WAP to display the array elements in reverse order
using functioncs and pointers */
#include<stdio.h>  

int reverse(int *ptr, int n);

int main() {
    int n=5;
    int a[n], *ptr, i;  

    printf("Enter %d integer numbers\n", n);  
    for(i = 0; i < n; i++)  
        scanf("%d", &a[i]);  

    ptr = &a[n - 1]; // indexes of 5 elements: [0, 1, 2, 3, 4] 

    reverse(ptr, n);

    return 0;
}


int reverse(int *ptr, int n) {
    int i;
    printf("\nElements of array in reverse order ...\n");  
    for(i=0; i<n; i++)  
        printf("%d\n", *ptr--);  

    return 0;
}