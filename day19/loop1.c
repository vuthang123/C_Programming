/*
    Nhập vào một số nguyên dương từ bàn phím và in ra số đó.
    Nếu nhập sai, bắt nhập lại.
 */
#include<stdio.h>
int main()
{
    int a;
    do
    {
    printf("enter a = ");
    scanf("%d",&a);
    }
    while (a < 1) ;
    printf("in ra man hinh= %d",a);
}