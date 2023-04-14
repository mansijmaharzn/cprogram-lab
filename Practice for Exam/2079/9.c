#include <stdio.h>
void swapnum(int *num1, int *num2) {
   int tempnum;

   tempnum = *num1;
   *num1 = *num2;
   *num2 = tempnum;
}

int main() {
   int v1 = 11, v2 = 77;

   printf("Before swapping:");
   printf("\nValue of v1 is: %d", v1);
   printf("\nValue of v2 is: %d", v2);

   swapnum(&v1, &v2);

   printf("\nAfter swapping:");
   printf("\nValue of v1 is: %d", v1);
   printf("\nValue of v2 is: %d", v2);
}