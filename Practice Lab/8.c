#include<stdio.h>
#include<string.h>

int main() {
    FILE * file;
    char name[50];
    char choice[1], initialLetter[1];
    int length, index, count=0;
    int i;

    printf("Do you want to\nadd names(a)\ndisplay n-th name(n)\ndisplay names starting with a letter(d)\n-> ");
    scanf("%c", choice);

    if (strcmp(choice, "a") == 0) {
        file = fopen("studentData.txt", "w");
        printf("Enter the number of names to add: ");
        scanf("%d", &length);
        for (i=0; i<length; i++) {
            printf("Enter name: ");
            scanf("%s", name);
            fputs(name, file);
            fputs("\n", file);
        }
        printf("Entered all the names successfully!");
        fclose(file);
    }

    else if (strcmp(choice, "n") == 0) {
        file = fopen("studentData.txt", "r");
        printf("Enter the index of name to display: ");
        scanf("%d", &index);
        while (fscanf(file, "%s", name) != EOF) {
            if(++count == index){
                printf("The name in the index entered is: %s\n", name);
                break;
            }
        }
        fclose(file);
    }

    else if (strcmp(choice, "d") == 0) {
        file = fopen("studentData.txt", "r");
        printf("Enter initial letter: ");
        scanf("%s", initialLetter);
        printf("%s", initialLetter);

        // AYENA
        // while (fscanf(file, "%s", name) != EOF) {
        //     // printf("%s", name);
        //     if (name[0] == initialLetter) {
        //         printf("%s\n", name);
        //     }
        // }
        fclose(file);
    }


    return 0;
}