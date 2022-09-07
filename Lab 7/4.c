/*
WAF which receives 5 integers and written the sum, average and standard deviation
of these numbers. Call this function from main function and print the result in
main function.
*/

// AYENA ;-;
#include<stdio.h>
#include<math.h>

int calculate(int num[], double *total, double *average, double *sd);

int main() {
    int num[5], i;
    double *total, *average, *sd=0.0;

    for (i=0; i<5; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d ", &num[i]);
    }

    calculate(num, total, average, sd);

    printf("Total: %f", *total);
    printf("Average: %f", *average);

    return 0;
}

int calculate(int num[], double *total, double *average, double *sd) {
    int i;
    
    for (i=0; i<5; i++) {
        *total += num[i];
    }

    *average = *total/5;

    // standard deviation
    float sum=0.0, mean;
    sum = *total;
    mean = sum / 10;

    sum = 0.0;
    for (i = 0; i < 5; i++) {
        sum += (num[i] - mean) * (num[i] - mean);
    }
    *sd = sqrt(sum / 5);

    return 0;
}
