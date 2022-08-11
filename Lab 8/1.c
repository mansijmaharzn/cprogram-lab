#include<stdio.h>

int main() {
    char string[100];
    int i = 0;

    printf("Enter string: "); 
    scanf("%s", string);

    while( string[i] != '\0' ) { // \0 == end of string
    // if char in lowercase, subtract 32 and get it in upperCase
        if( string[i] >= 'a' && string[i] <= 'z' ) {
            string[i] = string[i] - 32;
        }
        i++;
    }

    printf("In Upper Case is: "); 
    printf("%s", string);

    return 0;
}