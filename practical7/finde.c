#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int factorial(int x);

int main(void){

// declare the variables

int order, i;
double e, *terms;

printf("please enter the order you wish to use\n");

// enter the number of oreder
if (scanf("%d", &order) != 1){
    printf("Did not enter a number\n");
    return 1;
}

// printf("5! is %d\n",factorial(5));

// dynamic allocate the arry with type double
terms = (double *)malloc(order * sizeof(double));

// calculate the factorial for denominator
for (i = 0; i < order; i++){
    terms[i] = 1.0 / (double) factorial(i + 1);
    
}

e = 1.0;
for (i = 0; i < order; i++){
    e = e+terms[i];

}


// free the dynamic allocate
free(terms);

// calculate the difference between the true value and the estimated value
printf("e is estimated as %.10f, with difference %e\n", e, e - exp(1.0));

return 0;

}

// calculate the factorial
int factorial(int x){

if(x<0){
    printf("You must use a positive number\n");
    return (-1);
}

else if(x == 0){
    return 1;

}
else{
    return (x * factorial(x - 1));

}

}