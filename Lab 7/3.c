/* Calculate the factorial of an integer entered through the keyboard.
Make main function to input the integer and call a function that calculates the
factorial of the integer.
*/
#include<stdio.h>

int factorial(int num);

int main() {
    int num, result;

    printf("Enter number: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("Factorial: %d", result);

    return 0;
}

int factorial(int num) {
    int i, fact;

    for (i=num; i>=1; i--) {
        fact *= i;
    }

    return fact;
}