#include<stdio.h>
int main ()
{
    int a = 6 ;
    int b = 5;
    int c = 10;
    printf("%d   == %d is %d ",a,b,a==b);
    printf("\n%d   == %d is %d ",a,c,a==c);
    printf("\n%d   >  %d is %d ",a,b,a>b);
    printf("\n%d   >  %d is %d ",a,c,a>c);
    printf("\n%d   <  %d is %d ",a,b,a<b);
    printf("\n%d   <  %d is %d ",a,b,a>c);
    printf("\n%d   != %d is %d ",a,c,a!=b);
    printf("\n%d   != %d is %d ",a,b,a!=c);
    printf("\n%d   => %d is %d ",a,b,a>=b);
    printf("\n%d   => %d is %d ",a,c,a>=c);
    printf("\n%d   <= %d is %d ",a,b,a<=b);
    printf("\n%d   <= %d is %d ",a,b,a<=b);
}