#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>


int main()
{
    int a ,*ptr ,n ,i, sum=0 ;
    printf("enter number of  elements");
    scanf("%d",&a);

    ptr = (int *)malloc(a*sizeof(int ));

    if(ptr==NULL)
    {
        printf("khong duoc cap phat");
    }
    
    for(i=0; i < a ; i++)
    {
        printf("enter elements");
        scanf("%d",&ptr[i]);
        sum += ptr[i];
    }
    
    printf("sum = %d", sum);
    
    free(ptr);
}
