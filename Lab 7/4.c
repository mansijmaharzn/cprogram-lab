// Ayena ;-;
#include<stdio.h>
#include<math.h>

int calculate(int *a, int *b, int *c, int *d, int *e, float *total, float *average, float *sd);

int main() {
    int a, b, c, d, e;
    float *total, *average, sd=0.0;

    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d ", &a, &b, &c, &d, &e);

    calculate(&a, &b, &c, &d, &e, &total, &average, &sd);

    return 0;
}

int calculate(int *a, int *b, int *c, int *d, int *e, float *total, float *average, float *sd) {
    *total = *a+*b+*c+*d+*e;
    *average = *total/5;

    // standard deviation
    float sum=0.0, mean;
    int i;
    sum = *total;
    mean = sum / 10;
    for (i = 0; i < 10; ++i) {
        sd += pow(data[i] - mean, 2);
    }
    *sd = sqrt(sd / 10);
}
