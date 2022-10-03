
/* pow example luy thua     */
#include <stdio.h>      /* printf */
#include <math.h>       /* pow */
 
int main ()
{
    //note ham pow su dung kieu du lieu float  double hoac long double
  printf ("7 ^ 3 = %.2lf\n", pow (7.0, 3.0) );
  printf ("7 ^ 3 = %d\n", (int)(pow(7.0,3.0)));
  printf ("7 ^ 3 = %.2f\n", (float)(pow(7.0,3.0)));
  printf ("4.73 ^ 12 = %lf\n", pow (4.73, 12.0) );
  printf ("32.01 ^ 1.54 = %lf\n", pow (32.01, 1.54) );
  return 0;
}