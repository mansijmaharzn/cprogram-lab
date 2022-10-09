/*
WAF which receives 5 integers and return the sum, average and standard deviation
of these numbers. Call this function from main function and print the result in
main function.
*/

// AYENA ;-; Solved By ZXY-CC-3ag13
#include<stdio.h>
#include<math.h>

void calculate(int num[], double result[]);

int main() {
    int num[5], i;
    double result[3] = {0,0,0};

    for (i=0; i<5; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num[i]);
    }

    calculate(num, result);

    printf("Sum: %f\n", result[0]);
    printf("Average: %f\n", result[1]);
    printf("Standard Deviation: %f", result[2]);

    return 0;
}

void calculate(int num[], double result[]) {
    int i;
    
    for (i=0; i<5; i++) {
        result[0] += num[i];
    }

    result[1] = (result[0])/5.0;

    // standard deviation
    for (i=0; i<5; i++) {
        result[2] += pow((num[i] - result[1]), 2);
    }
    result[2] = sqrt(result[2]/5.0);
}
