// How do you return pointer from a function
#include <stdio.h>

int *fun() {
    // static variable to preserve value even after function exits
    static int a = 10;
    return &a;
}

int main() {
    int *p;

    p = fun();

    printf("%p\n", p);
    printf("%d\n", *p);
    
    return 0;
}