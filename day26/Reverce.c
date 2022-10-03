/*
    Dao nguoc con so 
*/
#include<stdio.h>
int main()
{
    int number,temp;
    printf("enter number");
    scanf("%d",&number);

    int rev;
    while(number>0)
    {
        temp = number % 10;
        rev  = rev*10 + temp;
        number /= 10;

    }
    printf("%d",rev);

}