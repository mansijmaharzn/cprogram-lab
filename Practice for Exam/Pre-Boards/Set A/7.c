// WAP to calculate factorial using recursive function
#include<stdio.h>

int fact(int num);

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Factorial: %d", fact(num));

    return 0;
}

int fact(int num) {
    if (num >= 1)
        return num * fact(num - 1);
    else
        return 1;
}