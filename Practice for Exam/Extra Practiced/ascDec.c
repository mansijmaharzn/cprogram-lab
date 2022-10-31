// ascending and descending numbers
#include<stdio.h>

int main() {
    int num[10], i, j, temp;

    for (i=0; i<5; i++) {
        printf("Enter %d: ", i+1);
        scanf("%d", &num[i]);
    }

    // ascending
    for (i=0; i<5; i++) {
        for (j=i+1; j<5; j++) {
            if (num[i]>num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("Ascending order:\n");
    for (i=0; i<5; i++) {
        printf("%d\n", num[i]);
    }


    // descending
    for (i=0; i<5; i++) {
        for (j=i+1; j<5; j++) {
            if (num[i]<num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("Descending order:\n");
    for (i=0; i<5; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}