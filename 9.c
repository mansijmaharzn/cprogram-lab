// 25 numbers re entered into an array
// WAP a program to find how many of them are:
// positive, negative, even, and odd
#include<stdio.h>

int main() {
    int a[25];
    int i, num;

    for (i=0; i<25; i++) {
        printf("%d. Enter Number: ", i+1);
        scanf("%d", &a[i]);
    }

    for (i=0; i<25; i++)  {
        num = a[i];
        if (num > 0)
            printf("%d is positive. \n", num);
        else if (num < 0)
            printf("%d is negative. \n", num);
        
        if (num % 2 == 0)
            printf("%d is even. \n", num);
        else
            printf("%d is odd. \n", num);
    }   

    return 0;
}