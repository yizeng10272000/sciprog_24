# include<stdio.h>
# include<math.h>

/* tan_x is used to record the radians calculated each time */

float tan_x[13];

float degtorad(float arg);
float area_cal(float tan_x[],int n, float b, float a);

int main(void)
{

int n, i;
float area, b, a;

n = 12;
i = 0;
b = 60;
a = 0;


/* question 1 part 2 construct a loop*/

for (i; i < n; i++){
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
    for (i = 0; i < n; i++) {
        printf("%f ", tan_x[i]);
    }
    printf("\n");

/* question 2 */

area = area_cal(tan_x,n,b,a);

printf("the area is %f\n", area);

return 0;
}



/* question 1 part 1 convert the degrees to radians */

float degtorad(float arg) {
 return( (M_PI * arg)/180.0 );
 }



/* question 2 create a function to calculate the area */

float area_cal(float tan_x[],int n,float b,float a){

   int i;
   float sum; 

   sum = 0.0;

   for (i = 0; i < n; i++){
   sum = sum + tan_x[i] + tan_x[i + 1]; 
    
   } 

   return(sum * (b - a) / (2 * n));
}
 