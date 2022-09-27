/*
 * WAP to sort a list of names in lexicographics order
 * using pointers and store the output in data file.
 */
// lexicographics means Alphabetic order ;-;
#include <stdio.h>
#include <string.h>

int main()
{
    int n = 5;
    char names[20][20], temp[20], copy[20][20];
    FILE* fp;
    int i, j;

    for (i = 0; i < n; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", *(names + i));
        strcpy(*(copy + i), *(names + i));
        for (j = 0; j < strlen(*(copy + i)); j++) {
            if (*(copy[i] + j) >= 'A' && *(copy[i] + j) <= 'Z') {
                *(copy[i] + j) += 32;
            }
        }
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(*(copy + i), *(copy + j)) > 0) {
                strcpy(temp, *(copy + i));
                strcpy(*(copy + i), *(copy + j));
                strcpy(*(copy + j), temp);

                strcpy(temp, *(names + i));
                strcpy(*(names + i), *(names + j));
                strcpy(*(names + j), temp);
            }
        }
    }

    // Writing to file
    fp = fopen("names.txt", "w");
    for (i = 0; i < n; i++) {
        fprintf(fp, "%s\n", *(names + i));
    }
    fclose(fp);
    printf("\nData written to file successfully.");
    return 0;
}
