/* 
 * i. WAP that allows the user for creating and reading from a simple file.
 * ii. Read a message from an existing file 
 * iii. Append a message to an existing file 
 * iv. Display the contents of file 
 */
#include<stdio.h>

int main() {
    FILE *file;
    char ch, input[50],filename[20];

    // i. ko question kasaile buzyo? ;-;
    // To open in w+ mode (write and read mode)
    

    printf("i. Creating and reading from a simple file\n");
    printf("Enter file name: ");
    scanf("%s", filename);
    file = fopen(filename, "w+");

    printf("Enter data to write in file: ");
    scanf("%s", input);
    fputs(input, file);
    printf("Completed writing to file %s\n", filename);
   
    rewind(file);

    printf("\nReading from file: ");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    printf("\nCompleted reading file %s\n", filename);
    fclose(file);

    printf("\n");
    



    // ii. read message
    printf("ii. Reading a message from an existing file existing.txt\n");
    file = fopen("existing.txt", "r");
    ch = fgetc(file);
    printf("\nReading from file:\n");
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(file);
    }
    fclose(file);

    printf("\n\n");




    
    // iii. append message
    printf("iii. Appending a message to an existing file existing.txt\n");
    file = fopen("existing.txt", "a");
    printf("\nWrite a message to append: ");
    clearerr(stdin);
    while ((ch = getchar()) != EOF) {
        fputc(ch, file);
    }
    fclose(file);

    printf("\n\n");





    // iv. display contents of file
    printf("iv. Displaying contents of file existing.txt\n");
    printf("\nReading from file:\n");
    file = fopen("existing.txt", "r");
    ch = fgetc(file);
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(file);
    }
    fclose(file);

    return 0;
}
