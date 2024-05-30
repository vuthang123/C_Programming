#include <stdio.h>
#include <stdlib.h> 
int main() 
{
    int *px;
	px = (int *)malloc(sizeof(int));
	*px = 42;
    printf("Vi tri con tro px la %p \n", px);
    printf("Gia tri con tro px tro toi la %d \n", *px);
    return 0;
}