
/* Iterative and recursive versions of Eulid's algorithm to calculate 
 gcd of two positive integers */

#include<stdio.h>

int iterative(int a, int b);
int recursive(int a, int b);
 
int main(){

// declare the variables
int a, b, error;

// enter the number of a, b
printf("please enter your two positive integers of a, b\n");
error = scanf("%d %d", &a, &b);

if (error != 2){
  printf("please enter two positive integers.\n");
  return 1;
}
if (a <= 0 || b <= 0){
  printf("please enter positive integers.\n");
  return 1;
}


printf("the greatest common divisor calculated by iterative between %d and %d is %d\n", a, b, iterative(a, b));

printf("the greatest common divisor calculated by recursive between %d and %d is %d\n", a, b, recursive(a, b));


return 0;

}

// calculate the gcd by iteration
int iterative(int a, int b){

while(b != 0){
  int temp;
  
  temp = b;
  b = a % b;
  a = temp;

}

  return a;

}

// anoother way to calculate the gcd

int recursive(int a, int b){
  if(b == 0){
    return a;
  }
  else{
    return(recursive(b, a % b));
  }

}