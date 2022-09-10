// Print fibonacci series
#include<stdio.h>

int main() {
    int i, range, first, second, next;

    printf("Enter range: ");
    scanf("%d", &range);

    first = 0, second = 1;
    next = first + second;

    printf("%d %d ", first, second);
    for (i=3; i<=range; i++) {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }

    return 0;
}