#include<stdio.h>

int main() {
    int i;
    float length, breadth, perimeter, area;

    for (i = 1; i <= 50; i++) {
        printf("Enter length: ");
        scanf("%f", &length);
        printf("Enter breadth: ");
        scanf("%f", &breadth);

        // for perimeter
        perimeter = 2*(length+breadth);
        // for area
        area = length * breadth;

        // %.2f is for printing only 2 numbers after decimal ;-;
        printf("The rectangle having %.2f length and %.2f breadth:\n", length, breadth);
        if (area > perimeter) {
            printf("Has area greater than perimeter by: %.2f\n", area-perimeter);
        } else {
            printf("Has perimeter greater than area by: %.2f\n", perimeter-area);
        }

    }

    return 0;
}