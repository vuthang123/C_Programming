#include<stdio.h>

int main() {
	int a,b,c;
//	scanf("%d%d%d", &a,&b,&c);
	a=1;
	b=2;
	c=3;
	
	if(a <= b && b<=c)
	{
		printf("increasing");
	}
	else if(a >= b && b >= c)
	{
		printf("decreasing");
	}
	else
	{
		printf("neither increasing nor decreasing order");
	}
	return 0;
}

