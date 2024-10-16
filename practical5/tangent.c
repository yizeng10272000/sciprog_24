#include<stdio.h>
#include<math.h>

float artanh1(float x, float delta);
float artanh2(float x);

int main(void){

int n, index;
float delta, x;

float results1[181];
float results2[181];

/* Get the user in enter a real positive number delta */

printf("Please enter a positive number\n");
scanf("%f", &delta);

index = 0;

for (x = -0.9; x <= 0.9; x += 0.01) {
     float result1 = artanh1(x, delta);
     float result2 = artanh2(x);
     results1[index] = result1;
     results2[index] = result2;
     index++;
}

for (int i = 0; i < 181; i++) {
        printf("x = %.2f, Difference = %.10f\n", -0.9 + i * 0.01, fabs(results1[i] - results2[i]));
    }

    return 0;

}

/* For Maclaurin series to calculate the hyperbolic arc tangent number */

float artanh1(float x, float delta) {
    float sum = 0.0;
    float term = x;
    int n = 0;
    while (fabs(term) > delta) {
        sum += term;
        n++;
        term = pow(x, 2*n + 1) / (2*n + 1);
    }
    return sum;
}

/* For natural logarithms to calculate the hyperbolic arc tangent number */

float artanh2(float x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}