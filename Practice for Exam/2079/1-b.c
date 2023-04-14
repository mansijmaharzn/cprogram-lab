#include <stdio.h>

int Pow(int X, int Y) {
    int power = 1, i;

    for (i = 1; i <= Y; ++i) {
        power = power * X;
    }

    return power;
}

int main() {
    int base, exponent;

    printf("Enter Base: ");
    scanf("%d", &base);

    printf("Enter Power: ");
    scanf("%d", &exponent);

    printf("%d ^ %d = %d", base, exponent, Pow(base, exponent));
    return 0;
}