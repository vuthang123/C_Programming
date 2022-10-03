#include<stdio.h>
#define MAX_SIZE 100

int main ()
{
    int arr[MAX_SIZE];
    // Nhap so elements 
    int n ;
    do 
    {
        printf("Nhap so phan tu cua mang  n  ");
        scanf("%d", &n);
    }
    while ( n <=0 || n >MAX_SIZE);
    //Nhap gia tri vao mang
    printf(" Nhap gia tri phan tu cua mang \n");
    int i ;
    for (i=0; i < n ; i++)
    {
        printf("a[%d] = \t",i);
        scanf("%d",&arr[i]);
    }
    //xuat gia tri mang
    printf(" Xuat gia tri phan tu cua mang \n");
    for (i=0 ; i<n ;i++ )
    {
        printf("a[%d] = %d\n",i ,arr[i]);
       
    }
    // tim kiem gia tri 
    int v;
    printf(" Nhap gia tri can tim trong  mang \n");
    scanf("%d", &v);
    
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] == v)
        {
            printf("\nTim thay so %d tai chi so arr[%d]", v,i);
            return i;
        }
    
    }
    
    
}