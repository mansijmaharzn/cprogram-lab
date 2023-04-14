#include <stdio.h>

int is_prime(int);

int main() {
    FILE* ptr;
    ptr = fopen("Num.txt", "r");

    FILE* fp;
    fp = fopen("Prime.txt", "a+");

    if (NULL == ptr) {
        printf("File can't be opened \n");
        return 0;
    }

    int num;
    printf("\nPrime number in files are:\n");
    while (fscanf(ptr, "%d", &num) != EOF){
        if( is_prime( num ) ){
            printf("%d\n", num);
            fprintf(fp, "%d ", num);
        }
    }

    return 0;
}

int is_prime( int n ){

    if(n == 1){
        return 0;
    }

    int j, flag = 1;

    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            flag = 0;
            break;
        }
    }

    return flag;
}