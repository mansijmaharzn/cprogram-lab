/*
WAP to display the address of three different variables
of different data types with their values
i. without using pointer variable
ii with using pointer variable
*/
#include<stdio.h>

int main() {
    // to print the address of a variable, we use "%p" specifier
    int a;
	float b;
	char c;

    printf("Without using pointer variable\n");
    printf("Address of a: %p\n", &a);
	printf("Address of b: %p\n", &b);
	printf("Address of c: %p\n", &c);

	// declare and initialize pointers 
	int *ptr_a = &a;
	float *ptr_b = &b;
	char *ptr_c = &c;

    printf("With using pointer variable\n");
	printf("Address of a: %p\n", ptr_a);
	printf("Address of b: %p\n", ptr_b);
	printf("Address of c: %p\n", ptr_c);

    return 0;
}