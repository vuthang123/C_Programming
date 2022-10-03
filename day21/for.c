#include<stdio.h>
int main()
{
    int number;

    printf("enter number ");
    scanf("%d",&number);

    int numberlast = number ;
    int remainder;
    for(;numberlast>9;){
        numberlast=numberlast/10;
        remainder =numberlast%10;
        printf("quotient is %d",numberlast);
        printf("\nremainder is %d",remainder);
        printf("\n");
         printf("\n");
          printf("\n");
    }
    printf("number frist is %d",numberlast);
    



}