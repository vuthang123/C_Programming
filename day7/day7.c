#include<stdio.h>
int main()
{
    // Export printf()
    printf("hello world ");
    // Enter integer
    int a;
    printf("\nEnter a=");
    //Don't forget the sign &
    scanf("%d",&a);  
    // Export format
    printf("value a = %d",a);

    //  enter b 
    float b;
    printf("\nEnter b = ");
    scanf("%f",&b);
    printf("value b= %.2f",b);
    //  enter c
    char c ;
    printf("\nEnter c= ");
    scanf("%c",&c);
    printf("value c =%c",c);

    // 
    int a1,a2;
    printf("\nenter two number a1,a2 : ");
    scanf("%d %d",&a1,&a2);
    printf("\n value a1: %d,value a2 :%d ",a1,a2);
    printf("\na1 \b d");
    return 0;
} 
