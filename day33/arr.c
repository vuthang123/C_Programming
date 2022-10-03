#include<stdio.h >
int main ()
{
    char arr[5]={0,9,8,7,56};
    printf(" %d\n",sizeof(arr[5]));
    int i;
    for (i=0;i<5;i++)
    {
        arr[i]=i;
        

    }
    for (i=0;i<5;i++)
    {
        printf("arr[%d]= %d\n",i ,arr[i]);
        
    }

}