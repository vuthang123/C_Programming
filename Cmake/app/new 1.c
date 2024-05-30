#include<stdio.h>
#include <stdlib.h>
int main ()
{
	int i ,*p,n;
	
	scanf("%d",&n);
	/*ten con tro = (kieu du lieu)malloc(so luong o nho * sizeof(kieu du lieu)*/
	p = (int*)malloc(n*sizeof(int));
	
	for(i= 0 ; i < n; i++)
	{
		scanf("%d",(p+i));
	}
	for(i= 0 ; i < n; i++)
	{
		printf("%d", *(p+i));
		
	}
	printf("\n%d",sizeof(p));
	free(p);
	return 0 ;
}