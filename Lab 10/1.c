/*
Define a structure to store the roll no. and marks
of the students. WAP to store the informations of 20 students
and find the following:
i. Order the roll no. according to marks in descending order
ii. average marks
iii. print the roll no. whose marks fall under the average
*/
#include<stdio.h>

struct student {
    int rollNo;
    float marks;
};

int main() {
    int stdNo = 2, i, j;
    float temp;
    struct student a1[stdNo], b1[stdNo];

    for (i=0; i<stdNo; i++) {
        printf("Student %d (rollNo): ", i+1);
        scanf("%d", &a1[i].rollNo);
        printf("Student %d (marks): ", i+1);
        scanf("%f", &a1[i].marks);
    }

    // descending
    for (i=0; i<stdNo; i++) {     
        for (j=i+1; j<stdNo; j++) {     
            if (a1[i].marks < a1[j].marks) {
                b1[i].rollNo = a1[i].rollNo;
                b1[i].marks = a1[i].marks;
            }
        }
    }

    printf("The roll no. according to marks in descending order:\n");
    for (i = 0; i < stdNo; i++) {
        printf("%d ", b1.rollNo[i]);
        printf("%f\n", b1.marks[i]);
    }

    return 0;
}