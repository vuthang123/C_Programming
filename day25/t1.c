#include<stdio.h>
int main ()
{
    int number;
    printf("enter number");
    scanf("%d",&number);

    int dem ;
    int i ;

    for(i=2;i<=number;i++)
    {
        dem=0; 
        while(number % i ==0)
        {
            ++dem;
            number/=i;
        }

        if(dem)
        {
            if(dem>1)
            {
                printf("%d^%d",i,dem);
            }
            else
                printf("%d",i);
            
            if(number>i)
            {
                printf("*");
            }
        }    
    }
}