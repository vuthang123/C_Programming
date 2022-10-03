#include<stdio.h>
int main()
{
    int number;

    printf("enter number ");
    scanf("%d",&number);

    int numberlast = number ;
    int remainder; //remaindee : phan du
    while(numberlast>9)
    {
        numberlast=numberlast/10;
        remainder=numberlast%10;

        printf("quotient %d",numberlast);
        printf("\nremainder %d",remainder);
        printf("\n");
        printf("\n");
        
        
    }
    printf("number frist %d",numberlast);
}