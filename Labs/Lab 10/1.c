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
    int stdNo = 20, i, j;
    struct student a1[stdNo], b1; // b1 as temporary storage
    float totalMarks, avgMarks;

    for (i=0; i<stdNo; i++) {
        printf("Student %d (rollNo): ", i+1);
        scanf("%d", &a1[i].rollNo);
        printf("Student %d (marks): ", i+1);
        scanf("%f", &a1[i].marks);
    }

    // descending
    for (i = 0; i < stdNo; i++) {     
        for (j = i + 1; j < stdNo; j++) {     
            if (a1[i].marks < a1[j].marks) {
                b1 = a1[i];
                a1[i] = a1[j];
                a1[j] = b1;
            }    
        }
    }

    printf("The roll no. according to marks in descending order:\n");
    for (i = 0; i < stdNo; i++) {
        printf("RollNo: %d, ", a1[i].rollNo);
        printf("Marks: %f\n", a1[i].marks);
    }

    // average marks
    for (i=0; i<stdNo; i++) {
        totalMarks += a1[i].marks;
    }
    avgMarks = totalMarks/stdNo;
    printf("Average marks: %f\n", avgMarks);

    // marks fall under the average
    // under the avg means avg marks bhanda talla sabai? ki avg marks wala only?
    // doing this assuming that under avg marks means 0 to avgMarks
    printf("Roll numbers whose marks fall under the average:\n");
    for (i = 0; i < stdNo; i++) {
        if (a1[i].marks < avgMarks) {
            printf("RollNo: %d, ", a1[i].rollNo);
            printf("Marks: %f\n", a1[i].marks);
        }
    }

    return 0;
}