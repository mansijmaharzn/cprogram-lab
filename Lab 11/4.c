// WAP to calculate the characters in a file
#include<stdio.h>

int main() {
    FILE *file;
    char ch;
    int count=0;

    file = fopen("for4.txt", "r");
    ch = fgetc(file);
    while (ch != EOF) {
        count++;
        ch = fgetc(file);
    }

    fclose(file);
    printf("Characters: %d", count);

    return 0;
}
