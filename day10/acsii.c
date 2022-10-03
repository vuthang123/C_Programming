#include<stdio.h>
int main ()
{
     char b ;
     char c=97 ;
     
    printf("enter keyword :");
    scanf("%c",&b);
    printf("result '%d'",b);
    printf("\nresult '%c'",b);
    printf("\n%d"  ,   (c==97));
    int a=78;
    printf("\n%c",(char)a);
}