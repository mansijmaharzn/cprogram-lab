// WAP to pass pointer as an argument in a fuct
#include<stdio.h>

int increase(int *ptr);

int main() {
    int *ptr, num;

    printf("Enter number: ");
    scanf("%d", &num);

    ptr = &num;
    increase(ptr);

    printf("Number after 1 increament: %d", *ptr);

    return 0;
}

int increase(int *ptr) {
    *ptr += 1;
    return 0;
}