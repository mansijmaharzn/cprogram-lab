// ascending and descending string
#include<stdio.h>
#include<string.h>

int main() {
    char name[5][20], temp[20];
    int i, j;

    for (i=0; i<5; i++) {
        printf("Enter %d: ", i+1);
        scanf("%s", name[i]);
    }

    // ascending
    for (i=0; i<5; i++) {
        for (j=i+1; j<5; j++) {
            if (strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("Ascending:\n");
    for (i=0; i<5; i++) {
            printf("%s\n", name[i]);
    }

    // descending
    for (i=0; i<5; i++) {
        for (j=i+1; j<5; j++) {
            if (strcmp(name[i], name[j]) < 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("Descending:\n");
    for (i=0; i<5; i++) {
            printf("%s\n", name[i]);
    }

    return 0;
}