//#include<stdio.h> // C header file for standard input and output
//
//int a = 0 ; // initilaizing and declaring the integer a to value 0.
//	
//int main ()  // main class
//{
//	if ( a == 0 )  //  This condition will be true
//	{
//	printf ( " a = 0  \n " ) ;
//	}
//	else                        // Else part will be optimized
//	{
//		printf ( " a ! = 0  \n " ) ;
//	}
//	return 0 ; // returning value
//}

#include<stdio.h>
volatile int a ;    /* volatile Keyword used before declaration of integer variable a */
int main() // main class
{
a = 0 ;   // initializing the integer value to 0
if (a == 0)  // applying if condition
{
printf ( " a = 0 \n " ) ;
}
else// Now compiler never optimize else part because the variable is declared as volatile
{
printf ( " a ! = 0  \n " ) ;
}
return 0 ;
}
