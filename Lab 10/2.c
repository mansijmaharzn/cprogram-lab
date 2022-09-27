/*
Define a structure array for 20 people having the members to store
name, year of birth and month of birth. Find the name of people having birthday
in particular month.
*/
#include<stdio.h>
#include<string.h>

struct person {
    char name[30], birthMonth[30];
    int birthYear;
};

int main() {
    int i, j, perNo = 3;
    char month[30];
    struct person p1[perNo];

    for (i=0; i<perNo; i++) {
        printf("For person %d\n", i+1);
        printf("Enter name: ");
        scanf("%s", p1[i].name);
        printf("Enter birth-year: ");
        scanf("%d", &p1[i].birthYear);
        fflush(stdin);
        printf("Enter birth-month: ");
        scanf("%s", p1[i].birthMonth);
        printf("\n");
    }
    

    printf("Enter the month to find the people having birthday in that month:\n");
    printf("Enter month: ");
    scanf("%s", month);
   
    printf("\nPeople having birthday in %s are:\n", month);

    for (i=0; i<perNo; i++) {
        if (strcmp(month, p1[i].birthMonth) == 0) {
                printf("%s\n", p1[i].name);
        }
    }

    return 0;
}
