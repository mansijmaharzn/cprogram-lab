/* i. WAP that allows the user for creating and reading from a simple
ii. Read a message from an existing file
iii. Append a message to an existing file
iV. Display the contents of file */
#include<stdio.h>

int main() {
    // i. ko question kasaile buzyo? ;-;
    FILE *file, *appFile;
    char ch, input[50];

    // ii. read message
    file = fopen("existing.txt", "r");
    ch = fgetc(file);
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(file);
    }
    fclose(file);

    // iii. append message
    file = fopen("existing.txt", "a");
    printf("\nWrite a message to append: ");
    scanf("%s", input);
    fputs(input, file);
    fclose(file);

    // iv. display contents of file
    file = fopen("existing.txt", "r");
    ch = fgetc(file);
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(file);
    }
    fclose(file);

    return 0;
}