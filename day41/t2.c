#include<stdio.h>
#define CUBE(a) ((a)*(a)*(a))

void main ()
{
	
	int a ,x;
	scanf("%d",&x);
	
	a=CUBE(x+1);
	printf("%d",a );
}