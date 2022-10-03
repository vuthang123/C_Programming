#include<stdio.h>

int enter_array(int arr[],int n)
{
    int i;
    for (i=0 ; i< n ;i++)
    {
        printf("Nhap phan tu vao mang arr[%d] =  ", i );
        scanf( " %d", &arr[i]);
    }
    return 0 ;

}
int export_array(int arr[],int n )
{
    int i ;
    for (i=0 ; i<n; i++)
    {
        printf(" arr[%d] = %d\n", i , arr[i]);
    }
    return 0;
}
int Sum_Old(int arr[],int n)
{
    int i ,sum =0; 
    for(i=0 ;i<n ; i++)
    {
        if(arr[i] % 2 == 1)
        {
            sum += arr[i];
            
        }
       
    }
    
    return sum ;
}
int Sum_Even( int arr[], int n)
{
    int i, sum =0 ;
    for ( i=0 ;i <n ;i++)
    {
        if(arr[i] % 2 == 0 )
        {
            sum +=arr[i];
       
        }

    }
    
    return sum ;
}

int main ()
{
    int n ,arr[100]; 
    printf("Nhap so luong phan tu  n = ");
    scanf("%d", &n);
    printf("=====================Nhapvaomang==========\n");
    enter_array(arr,n);
    printf("=====================Xuatmang=============\n");
    export_array(arr,n);
    printf("=====================SumOld===============\n");
    printf("Sum Old = %d \n",Sum_Old(arr,n));

    printf("=====================SumEven===============\n");
    printf("Sum Eveb = %d \n", Sum_Even(arr,n));
 
}   
