#include<stdio.h>
int main()
{
    int i,j,a ;
    printf("Nhap doo dai canh");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        for(j=0;j<=a;j++)
            printf("*\t");
        
        printf("\n");
        
    }
}