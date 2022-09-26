/* WAP to open a file in read/write mode in it.
Read and write information in the file */
// milena ayena hya ;-;
#include<stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("for2.txt", "r+");
    ch = fgetc(file);
    while (ch != EOF) {
        fputc(ch, file);
        ch = fgetc(file);
    }

    fclose(file);
    printf("Done!");

    return 0;
}