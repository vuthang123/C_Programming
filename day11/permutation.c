// permutation  hoán vị
#include<stdio.h>
int main()
{
    int a,b, temp;
    printf(" enter a :");
    scanf("%d",&a);
    printf(" enter b :");
    scanf("%d",&b);
    printf(" a=%d\tb=%d",a,b);
    // Hoan vi
        {temp = a;
        a     = b;
        b     = temp;}
    printf("\nhoan vi a=%d,b=%d,temp=%d",a,b,temp);
}