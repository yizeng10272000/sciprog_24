#include<stdio.h>

int main(void){

int i, n_0, n_1, n_2, tem, n;

n_0 = 0;
n_1 = 1;

printf("please enter you number");
scanf("%d", &n);

if (n == 0) {
    printf("Fibonacci series: %d\n", n_0);
    return 1;
}

if (n == 1) {
    printf("Fibonacci series: %d, %d\n", n_0, n_1);
    return 1;
}


printf("Fibonacci series: %d, %d", n_0, n_1);

/* n start at 0 so i will be start at 2 */

for(i = 2; i <= n; i++){
     n_2 = n_0 + n_1;
     printf(", %d", n_2);
     n_0 = n_1;
     n_1 = n_2;

}

printf("\n");

return 0;

}