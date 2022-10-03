#include<stdio.h>
void print(int time)
{
    for(int i=0 ; i<time;i++)
    {
        printf("\nphai chien thang!");

    }
}
//in ra các ước của số nguển
void Devisor(int number)

{
    if (number<0)
        {
            number*=-1;
        }
    for(int i =2;i< number; i++)
    {
        if(number % i==0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    // print(5);
    // printf("before function/n");
    Devisor(-100);
    
    // printf("after functions");
}