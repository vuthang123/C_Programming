#include<stdio.h>
int main()
{
    int a ;
    printf("enter a=");
    scanf("%d",&a);
    if(a>0)
    {
        // so duong
        if(a%2==0)
        {
            printf("so duong chan %d ",a);

        }   
        else{
            printf("so duong le %d",a);
        }  

    }
    else if(a==0)
    {
        printf("khong duon va khong am %d",a);

    }
    else if(a<0)
    {
        // so am
        if(a%2==0)
        {
            printf("so am chan %d",a);
        }
        else {
            printf("so am le%d",a);
        }
    }

}