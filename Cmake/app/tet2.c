#include <stdio.h>
int main()
{

	int number = 5;
	int *p_int = &number;
	printf("\n %p", p_int); 	//1
	printf("\n %p", &p_int); 	//2
	*p_int=10;
	printf("\n%p", &number); 	//3
	printf("\n%d", number); 	//4
	return 0;
	
}