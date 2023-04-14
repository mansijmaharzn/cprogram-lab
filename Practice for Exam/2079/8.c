#include <stdio.h>
#include <string.h>

struct Employee{
    char Name[100];
    char Address[500];
    int Salary;
    int Age;
};

int main(){

    int size, i, compare = 0;
    printf("Enter number of Employee: ");
    scanf("%d", &size);

    struct Employee emp[size];

    printf("\nEnter Employee Details:\n");
    for(i=0; i < size; i++) {
        printf("\n\nEnter %d employee record:\n", i);
        printf("Enter Name: ");
        scanf(" %s", emp[i].Name);

        printf("Enter Address: ");
        scanf(" %s", emp[i].Address);

        printf("Enter Age: ");
        scanf(" %d", &emp[i].Age);

        printf("Enter Salary: ");
        scanf(" %d", &emp[i].Salary);
    }

    printf("\n\nAll the employee of Kathmandu between age 40 and 50 are: \n");
    for( i = 0; i < size; i++ ){
        compare = strcmp(emp[i].Address, "Kathmandu");
        if( compare == 0 ){
            if( emp[i].Age >= 40 && emp[i].Age <= 50 ){
                printf("%s\n", emp[i].Name);
            }
        }
    }

    return 0;
}