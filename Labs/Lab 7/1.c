/*
WAP to display following menu:
i. I∑
ii. sum of squares
iii. sum of cubes
iv. product
and perform operations as per user's choice.
*/
#include<stdio.h>

int main() {
    int choice;
    int num1, num2, result;

    printf("Enter for operation\nI∑(1)\nsum of squares(2)\nsum of cubes(3)\nproduct(4)\n> ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case 1:
            printf("I∑: %d", num1+num2);
            break;
        case 2:
            result = (num1*num1) + (num2*num2);
            printf("Sum of squares: %d", result);
            break;
        case 3:
            result = (num1*num1*num1) + (num2*num2*num2);
            printf("Sum of cubes: %d", result);
            break;
        case 4:
            printf("Product: %d", num1*num2);
            break; 
        default:
            printf("Invalid Input");
            break;
    }

    return 0;
}