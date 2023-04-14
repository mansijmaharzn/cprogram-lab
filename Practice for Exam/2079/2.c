// correct program
#include<stdio.h>

int sum(int, int, int);

int main() {
    int a, b, c, result;
    scanf("%d %d %d", &a, &b, &c);

    // here `result = ` and printf line are optional as per the question
    result = sum(a, b, c);
    printf("%d", result);

    return 0;
}

int sum(int x, int y, int z){
    int sum;
    sum = x + y + z;
    return sum;
}