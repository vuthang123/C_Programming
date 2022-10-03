/*

*/
#include<stdio.h>
int main()
{
    // int var;
    // printf("%p",&var);
    int *p_thang  ;//*p_thang bien con tro ; thang bien
    int thang = 5;
    //dia chi bien luu vao bien con tro
    p_thang=&thang;

    printf("dia chi cua bien thang %p ",p_thang);    // xuat dia chi bo nho trong ram
    printf("\ngia tri cua bien thang %d ",*p_thang);    // xuat gia tri cua bien con tro

}