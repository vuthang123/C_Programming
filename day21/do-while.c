#include<stdio.h>
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);

    int numberlast=number;

    do 
    {
        numberlast=numberlast/10;
        printf("numberfist = %d", numberlast);
    }
    while(numberlast>9);
    
    return 0;


}