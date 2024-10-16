#include<stdio.h>

int main(void){

int i, n_0, n_1, n_2, tem, n;

/* In order to avoid the situation where tem is assigned na, we need to manually enter the initial value of n_2 */

n_0 = 0;
n_1 = 1;
n_2 = 1;

printf("please enter you number");
scanf("%d", &n);

if(n == 0){
  printf("the %d-th Fibonacci series is %d\n", n, n_0);
  return 1;
}

if(n == 1){
  printf("the %d-th Fibonacci series is %d\n", n, n_1);
  return 1;
}

if(n == 2){
  printf("the %d-th Fibonacci series is %d\n", n, n_2);
  return 1;
}

for(i = 3; i <= n; i++){
    tem = n_2;
    n_2 = n_2 + n_1;
    n_0 = n_1;
    n_1 = tem;

}

printf("the %d-th Fibonacci series is %d\n", n, n_2);

return 0;

}