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
