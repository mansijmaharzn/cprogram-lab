/* WAP using switch statement to display Excellent, Very Good, Good, Satisfactory,
or Fail if the user enters A, B, C, D, E respectively */
#include<stdio.h>

int main() {
    char choice;

    printf("Enter grade: ");
    scanf("%c", &choice);

    switch (choice) {
        case 'A':
        case 'a':
            printf("Excellent!");
            break;
        case 'B':
        case 'b':
            printf("Very Good!");
            break;
        case 'C':
        case 'c':
            printf("Good!");
            break;
        case 'D':
        case 'd':
            printf("Satisfactory!");
            break;
        case 'E':
        case 'e':
            printf("Fail!");
            break;

        default:
            printf("Invalid choice!");
            break;
    }

    return 0;
}