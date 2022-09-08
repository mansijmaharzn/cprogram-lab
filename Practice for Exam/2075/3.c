// WAP that reads data from file "input.txt" and writes to "output.txt"
#include<stdio.h>

int main() {
    FILE *file, *des_file;
    char ch;

    file = fopen("input.txt", "r");
    des_file = fopen("output.txt", "w");

    ch = fgetc(file);
    while(ch != EOF) {
        fputc(ch, des_file);
        ch = fgetc(file);
    }

    printf("Done!");
    fclose(file);
    fclose(des_file);

    return 0;
}