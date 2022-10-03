/*
thuat toan :
gia su number la so chan 

numberlast = number % 10

numberlast % 2 ==1 ( kiem tra co phai chu so le  ko  )

numbelast= numberlast/10 ( chia 10 lay chu so tiep theo  )

*/



#include<stdio.h>
#include<stdbool.h>// library bool
int main()
{
     int number ;
     printf("enter key borad :");
     scanf("%d",&number);


    bool AllEven = true ;
    int number_last;

    while(number > 0)
    {
        number_last= number % 10;
        if( number_last % 2 == 1)
        {
            AllEven = false; // kiem tra number co phai so le ko ????
            break;
        }
        number/=10;
    }
    
    if(AllEven)
    {
        printf(" alleven ");
    }
    else 
    {
        printf(" old digit ");
    }

}