// WAP to find prduct of 2 integers using your own function
#include<stdio.h>

int prod(int a, int b);

int main() {
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = prod(a, b);

    printf("Product of %d and %d is %d.", a, b, result);

    return 0;
}

int prod(int a, int b) {
    return a * b;
}