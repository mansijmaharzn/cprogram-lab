// Yei hola hai idk maile question buzeko anusar yei ho
#include<stdio.h>

int main() {
    int a;
    float b, i;

    for (a = 1; a <= 6; a++) {
        for (b = 5.5; b <= 12.5; b+=0.5) {
            i = 2 + (b+(0.5*a));
            printf("i = %f\n", i);
            printf("x = %d\n", a);
            printf("y = %f\n", b);
            printf("------------\n");
        }
    }

    return 0;
}