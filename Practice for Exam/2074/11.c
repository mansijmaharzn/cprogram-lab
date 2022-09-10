// WAP to read and print data stored in input.txt
#include<stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("input.txt", "r");

    ch = fgetc(file);
    while (ch != EOF) {
        printf("%c", ch);
        ch = fgetc(file);
    }

    return 0;
}