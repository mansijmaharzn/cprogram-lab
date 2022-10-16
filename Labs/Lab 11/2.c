/* WAP to open a file in read/write mode in it.
Read and write information in the file */
#include<stdio.h>

int main() {
    FILE *file;
    char ch, string[20];

    file = fopen("for2.txt", "r+");
    if (file == NULL) {
        printf("File not found");
        return 0;
    }
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    printf("\nCompleted reading file");

    printf("\nEnter data to write in file: ");
    scanf("%s", string);
    fputs(string, file);

    printf("Completed writing to file");

    fclose(file);
    printf("\nDone!");

    return 0;
}
