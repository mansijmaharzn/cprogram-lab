/* WAP to sort a list of names in lexicographics order
using pointers and store the output in data file. */
// lexicographics means dictionary order ;-;
#include<stdio.h>
#include<string.h>

int main() {
    int n=5;
    char names[20][20], temp[20];
    char *ptr;
    int i, j;

    for (i=0; i<n; i++) {
        printf("Enter for %d: ", i+1);
        scanf("%s", names[i]);
    }

    ptr = names;
    // sorting
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (strcmp(*(ptr + i), *(ptr + j)) > 0) {
                strcpy(temp, *(ptr + i));
                strcpy(*(ptr + i), *(ptr + j));
                strcpy(*(ptr + j), temp);
            }
        }
    }

    return 0;
}