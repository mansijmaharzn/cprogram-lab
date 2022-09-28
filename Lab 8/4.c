/*
WAP that will sort a list of names in alphabetical order,
using string handling functions and use static to give
a list of names.
*/

#include<stdio.h>
#include<string.h>
int main(){
    static char name[10][20];
    char temp[20];
    int i, j, n;
    printf("Enter the number of names [MAX: 10]: ");
    scanf("%d", &n);
    printf("Enter the names [Length <=20]:\n");
    for(i=0; i<n; i++){
        printf("Name %d: ", i+1);
        scanf("%s", name[i]);
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(strcmp(name[i], name[j])>0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("The names in alphabetical order are: ");
    for(i=0; i<n; i++){
        printf("%s ", name[i]);
    }

    return 0;
}
