#include<stdio.h>
void enter_array(int arr[],int n );
void export_array(int arr[],int n );
int search_array(int arr[],int n,int a );

    void enter_array(int arr[],int n )
    {
        
        int i;
        for (i = 0 ; i < n ;i++)
        {
        printf(" \n nhap phan tu arr[%d] = ",i );
        scanf(" %d", &arr[i] );
        }
    }
    void export_array(int arr[],int n )
    {
        // int n ;
        for( int i= 0 ;i<n ;i++)
        {
            printf("\na[%d]=%d",i,arr[i]);
        
        }
    }
    int search_array(int arr[],int n,int a )
    {
        for (int i =0 ;i<n; i++)
        {
            if(arr[i]==a) 
            {
                printf( " \ngia tri %d tai arr[%d]",a,i );

                return 0 ;
            }
        }
        return 0;
    }
int main ()
{
    int arr[100];
    int n,a; 
    printf(" Nhap so phan tu ");
    scanf( " %d", &n);
    printf("=============Nhapmang==================");
    enter_array(arr,n);
    // printf("=============Xuatmang==================");
    // export_array(arr,n);
    
    
    // printf("=============Timkiem==================");


    // search_array(arr,n,a);
}   