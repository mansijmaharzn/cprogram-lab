/*
Define a structure "Person" to store the name, gender, and age.
Find the following:
i. Male and Female ratio
ii. No. of children of age below 10
iii. No. of elder people above age 50.
iv. Print all structure members in order of decreasing age.
*/
#include<stdio.h>
#include<string.h>

struct Person {
    char name[30], gender[30];
    int age;
};

int main() {
    int perNo, i, j;
    int totalMale=0, totalFemale=0, totalChildren=0, totalElder=0;
    float result=0.0;
    printf("Enter number of person: ");
    scanf("%d", &perNo);
    struct Person p1[perNo], b1;

    for (i=0; i<perNo; i++) {
        printf("For person %d\n", i+1);
        printf("Enter name: ");
        scanf("%s", p1[i].name);
        printf("Enter age: ");
        scanf("%d", &p1[i].age);
        printf("Enter gender(male/female): ");
        scanf("%s", p1[i].gender);
    }

    for (i=0; i<perNo; i++) {
        if (strcmp(p1[i].gender, "male") == 0)
            totalMale++;
        else if (strcmp(p1[i].gender, "female") == 0)
            totalFemale++;
        if (p1[i].age < 10)
            totalChildren++;
        else if (p1[i].age > 50)
            totalElder++;
    }

    result = totalMale/totalFemale;

    printf("Male Female ratio: %f\n", result);
    printf("No. of children of age below 10: %d\n", totalChildren);
    printf("No. of elder people above age 50.: %d\n", totalElder);

    // decreasing age
    for (i = 0; i < perNo; i++) {     
        for (j = i + 1; j < perNo; j++) {     
            if (p1[i].age < p1[j].age) {
                b1 = p1[i];
                p1[i] = p1[j];
                p1[j] = b1;
            }    
        }
    }

    printf("Structure members in order of decreasing age.:\n");
    for (i = 0; i < perNo; i++) {
        printf("Name: %s\n", p1[i].name);
        printf("Gender: %s\n", p1[i].gender);
        printf("Age: %d\n", p1[i].age);
    }

    return 0;
}