/*
WAP that will sort a list of names in alphabetical order,
using string handeling functions and use static to give
a list of names.
*/

#include<stdio.h>
#include<string.h>
int main(){
    int i,j,n;
    // namelimit,charlimit
    char names[50][20],s[100];
    printf("Enter number of names: ");
    scanf("%d",&n);

    for(i=0; i<n; i++) {
        printf("%d. Enter name: ", i+1);
        scanf("%s",names[i]);
    }

    // strcmp(), strcpy() -> string handling functions
    for(i=0; i<n; i++) {
        for(j=i+1; j<n ;j++){
            if (strcmp(names[i],names[j]) > 0) {
                strcpy(s,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],s);
            }
        }
    }

    printf("The sorted order:\n");
    for (i=0; i<n; i++) {
        printf("%s\n",names[i]);
    }
    
    return 0;
}
