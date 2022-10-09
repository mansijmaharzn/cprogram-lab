// WAP to find the sum of all elements of an array. Use array name itself as pointer
#include <stdio.h>

int main() {
  int a[100], size, sum=0, i;

  printf("Enter size of the array: ");
  scanf("%d", &size);

  printf("Enter the elements of the array:\n");
  for(i=0; i<size; i++) {
    printf("%d : ",i+1);
    scanf("%d",(a+i));
    sum += *(a+i);
  }

  printf("Sum of array elements is: %d\n",sum);

  return 0;
}
