// WAP to find the sum of all elements of an array. Use array name itself as pointer
#include <stdio.h>

int main() {
  int a[100], size, sum=0;

  printf("Enter size of the array: ");
  scanf("%d", &size);

  printf("Enter the elements of the array: ");
  for(int i=0; i<size; i++) {
    scanf("%d",&a[i]);
  }

  // calculation
  for(int i=0; i<size; i++) {
    sum += a[i];
  }

  printf("Sum of array elements is: %d",sum);

  return 0;
}