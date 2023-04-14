#include<stdio.h>

void oddeven(int num);
void posneg(int num);
void fact(int num);

int main(){

    int number;
    char choice;

    do {
        printf("A. Find Odd or Even\nB. Find Positive or Negative\nC. Find the Factorial value\nD.Exit");
        printf("\n\nEnter your choice: ");
        scanf(" %c", &choice);

        if( choice != 'D' ){
            printf("Enter a number: ");
            scanf(" %d", &number);
        }

        switch(choice){
            case 'A':
                oddeven(number);
                break;

            case 'B':
                posneg(number);
                break;

            case 'C':
                fact(number);
                break;

            case 'D':
                printf("\nExiting program\n");
                break;
        }


    } while( choice != 'D' );

    return 0;
}

void oddeven(int num){
    if( num % 2 == 0 ){
        printf("\n\n================\n%d is even number\n================\n\n", num);
    }else{
        printf("\n\n================\n%d is odd number\n================\n\n", num);
    }
}

void posneg(int num){
    if( num >= 0 ){
        printf("\n\n================\n%d is positive number\n================\n\n", num);
    }else{
        printf("\n\n================\n%d is negative number\n================\n\n", num);
    }
}

void fact(int num){
    int i = 0, factorial = 1;
    for( i = 1; i <= num; i++){
        factorial *= i;
    }
    printf("\n\n================\nFactorial of %d = %d\n================\n\n", num, factorial);
}