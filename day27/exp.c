
/* exp example  co so e */
#include <stdio.h>      /* printf */
#include <math.h>       /* exp */
 
int main ()
{
  double param, result;
  param = 5.0;
  result = exp (param);
  printf ("e^%f = %f.\n", param, result );
  return 0;
}