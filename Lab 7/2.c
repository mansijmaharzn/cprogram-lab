#include<stdio.h>

int addNumbers(int num1, int num2);

int main() {
    int num1, num2, result;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = addNumbers(num1, num2);

    printf("Sum is: %d", result);

    return 0;
}

int addNumbers(int num1, int num2) {
    return num1+num2;
}