#include<stdio.h>

int gcd(int a, int b);

int main(){

// declare the variables
int a, b;

// enter the number of a, b
printf("please enter your number of a\n");
scanf("%d", &a);

printf("please enter your number of b\n");
scanf("%d", &b);

printf("the greatest common divisor between %d and %d is %d\n", a, b, gcd(a, b));

return 0;

}

// calculate the gcd
int gcd(int a, int b){

while(b != 0){
  int temp;
  
  temp = b;
  b = a % b;
  a = temp;

}

  return a;

}