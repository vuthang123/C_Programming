#include<stdio.h>
int main()
{
    int a=5;
    // printf("%d",(a>0 && a%2== 0));
    
    // printf("\n%d ",(a%2==8 || a%5 == 0));
    
    // printf("\n%d",!(a==5));


    // int b=5;
    // printf("\n%d",(b==5 ||b++ > 0));
    // printf("\nb=%d ", b);

    // b=5;
    // printf("\n%d",(b==5 |b++ > 0));
    // printf("\nb=%d ", b);
    
    int b=5;
    printf("\n%d",(b==5 && b++ > 0));
    printf("\nb=%d ", b);
    
    b=5;
    printf("\n%d",(b==5 & b++ > 0));
    printf("\nb=%d ", b);
}