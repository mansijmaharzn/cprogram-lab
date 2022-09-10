// WAP to calculate area of a triangle
#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, area=0.0, s=0.0;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    s = (a + b + c) / 2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area is: %f", area);

    return 0;
}