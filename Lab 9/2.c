// WAP to add two numbers from variables and pointers
#include <stdio.h>

int main() {
   int first, second, *p, *q;

   printf("Enter two integers to add\n");
   scanf("%d%d", &first, &second);

   p = &first;
   q = &second;

   printf("Sum of the numbers using pointers: %d\n", *p + *q);
   printf("Sum of the numbers using variables: %d\n", first+second);

   return 0;
}