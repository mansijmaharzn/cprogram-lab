/* WAP to create a file, write some contains in a file and
display that contains in a console. */
#include<stdio.h>

int main() {
    FILE *file;
    char ch[100] = "Hello guys";

    file = fopen("forNum9.txt", "w");

    fputs(ch, file);

    fclose(file);
    
    printf("Contains: %s", ch);

    return 0;
}