#include <stdio.h>  
int main() {  
    int age;

    printf("Enter your age");  
    scanf("%d",&age);

    // ternary operator (conditional)
    (age>=18) ? (printf("Eligible for voting")) : (printf("Not eligible for voting"));

    return 0;  
}