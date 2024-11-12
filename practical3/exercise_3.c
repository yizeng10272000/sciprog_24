# include<stdio.h>
# include<math.h>

int main(void){
/* Declare variables */
   int i, n;
   float sum, h, x, a, b, t; 

/* part 1 */
/* assign the variables, h means the size of each step from a = 0 to b = pi/3 */

   sum = 0.0;
   a = 0.0;
   b = M_PI / 3;
   n = 12;
   h = (b - a) / n;
   printf("the value of a is %f, the value of b is %f\n", a, b);

/* part 2 */
/* calculate the tan(0) + tan(pi/3) */

   t = tan(a) + tan(b);
   printf("the sum of tan(0) and tan(pi/3) is %f\n", t);

/* part 3 */
/* Create a loop that generates 11 equidistant points between 0 ? p/3.*/

   for (i = 0; i < n; i++){
   x = a + i * h;
   printf("the %d th value of x is %f\n",i+1 , x);
   }

/* part 4 */
/* sum the value corresponding to each step point */ 
  
   for (i = 0; i < n; i++){
   x = a + i * h;
   sum = sum + tan(x) + tan(x + h); 
   
   
   } 
   printf("the sum of each tan value is %f\n", sum);

/* part 5 */
/* calculate the final number of sum */

   sum = sum * (b - a) / (2 * n);
   printf("the final number is %f\n", sum);
   
/* part 6 */
/* comapre between the number baed on Trapezodial rule and the real log(2) */

   printf("the sum is %f, and the log(2) is %f, and the difference is %f\n", sum, logf(2.0), (sum - logf(2.0)));
   
   return 0;
}