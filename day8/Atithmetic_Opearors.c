#include <stdlib.h>
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    // addition 
    int   sum = a+b;
    printf("\n\n%d  +   %d   = %d",a,b,sum);
    // subtraction    
    int   sub = a-b;
    printf("\n%d    -   %d   = %d ",a,b,sub);
    //  multiplication
    int   mul = a*b;
    printf("\n%d    *   %d   = %d",a,b,mul);
    // division
    // float div = float(a/b);
    float div = (float)a/b;
    // float div = (float)a/b;
    printf("\n%d    /   %d   = %f",a,b,div);
    // modulo division
    int   mod = a%b;
    printf("\n%d    %%  %d   = %d",a,b,mod);
    

}   
