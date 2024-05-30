#include <stdio.h>

int *timSoLonNhat(int x, int y)
{
   if(x>y)
   {
       return &x;     
   }
   else
   {
       return &y; 
   }
}

int main()
{
   int *result;
   int a = 11;
   int b = 15;
   result = timSoLonNhat(a,b);
   printf("So lon nhat = %d\r\n",*result);
   return 0;
}