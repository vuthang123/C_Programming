#include <stdio.h>
int main()
{
    int a[7] = {1,2,3,4,5,6,7};
    int *ptr = (int*)(&a+1);
    printf("%d %d\n", *(a+1), *(ptr-1));
	printf("%d \n", sizeof(a));
	printf("%x \n", (a[0]));
	if(*(int*)&a)
	{
		printf("lsb");
		
	}
	else
	{
		printf("msb" );
		
	}
	
    return 0;
}