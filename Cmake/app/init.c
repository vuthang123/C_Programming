#include<stdio.h>
int global =100;
int foo(){
	static int x =10;
	return 0 ;
}
int main()
{
	int x ;
	foo();
	printf("%d",foo());
}