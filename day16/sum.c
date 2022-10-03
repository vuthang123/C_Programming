#include<stdio.h>
int main ()
{
    int a ,b,i ;
    int sum =0 ;
    
    printf("nhap a=");
    scanf("%d",&a);
    printf("nhap b=");
    scanf("%d",&b);
    // kiem tra so chan
    if(a>b)
    {
        printf("khong hop le");

    }
    if(a%2==0)
    a++;
    
    for(i=a ; i<=b; i+=2)
            
    {
            sum+=i;
    }
    printf("sum =%d",sum );
    
}