# include<stdio.h>
# include<math.h>

/* tan_x is used to record the radians calculated each time */

# define N 13
float tan_x[N];

float degtorad(float arg);
float area_cal();  // This is a subfunction

int main(void){

int i;
float area, b, a;

b = 60;
a = 0;

/* question 1 part 2 construct a loop*/

for (i = 0; i < N; i++){
 float degree, radval; 
 
/* question 1 part 3 generate the degree angles */

  degree = i * 5;
  
/* question 1 part 4 generate the radian values */

 radval = degtorad(degree);
 
/* question 1 part 5 compute and store tan(degree) */

 tan_x[i] = tan(radval);

}

/* print the result of tan_x */

printf("The array is: ");
    for (i = 0; i < N; i++) {
        printf("%f ", tan_x[i]);
    }
    printf("\n");

/* question 2, Create a function/subroutine that calculates the area */

area = area_cal();

printf("the area is %f\n", area);
printf("real result %f\n", log(2.0));

return 0;
}



/* question 1 part 1 convert the degrees to radians */

float degtorad(float arg) {
 return( (M_PI * arg)/180.0 );
 }



/* question 2 create a function to calculate the area */

float area_cal(){

   int i;
   float sum; 

   sum = 0.0;

   for (i = 0; i < N; i++){
   sum = sum + tan_x[i] + tan_x[i + 1]; 
    
   } 

   return(sum * degtorad((60 - 0) / (2 * N)));
}
 