#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b, c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a = %dla fso lon nhat",a);

    }
    else if(b>c&&b>a)
    {
        printf("b=%d la so lon nhat",b);

    }
    else if(c>a&&c>b)
    {
        printf("c=%d la so lon nhat",c);
    }
}