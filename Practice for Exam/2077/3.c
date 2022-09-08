/* Create a structure named course with name, code and credit_hour
as its members. WAP using this structure to read data of 5 courses
and display the data of those courses having credit_hour greater than 3. */
#include<stdio.h>

struct course {
    char name[30], code[30];
    float credit_hour;
};

int main() {
    int noOfCourse = 3;
    struct course c1[noOfCourse];
    int i;

    // input
    for (i=0; i<noOfCourse; i++) {
        printf("Enter course name: ");
        scanf("%s", c1[i].name);
        printf("Enter course code: ");
        scanf("%s", c1[i].code);
        printf("Enter credit hour: ");
        scanf("%f", &c1[i].credit_hour);
    }

    for (i=0; i<noOfCourse; i++) {
        if (c1[i].credit_hour > 3) {
            printf("Name: %s\n", c1[i].name);
            printf("Code: %s\n", c1[i].code);
            printf("Name: %f", c1[i].credit_hour);
        }
    }

    return 0;
}