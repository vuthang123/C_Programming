#include<stdio.h>
int enter_arr(int a[],int n)
{
    int i ;
    for (i=0 ;i < n ; i++)
    {
        printf("Nhap phan tu a[%d] =  " ,i);
        scanf("%d", &a[i]);
    }
    return 0 ;
}
int export_arr(int a[],int n)
{
    int i;
    for (i=0;i < n ;i++)
    {
        printf("a[%d] = %d\n" , i , a[i]);
    }
    return 0 ;
}
int max_arr(int a[],int n)
{
    int i, max = a[0];
    for (i=0 ;i<n ;i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("max_arr = %d\n", max);
    return max;
}
int min_arr(int a[],int n)
{
    int i =0 ,min = a[0] ;
    for (i=0 ; i<n ;i++)
    {
        if(min > a[i])
        {
            min= a[i];
        }
    }
    printf( "min_arr = %d",min );
    return min;
}
int main()
{
    int n ,arr[100];
    printf("Nhap so N ");
    scanf("%d" , &n);
    printf("=============ENTER_ARR==============\n");
    enter_arr(arr, n);
    // printf("=============EXPORT_ARR=============\n");
    // export_arr(arr,n);
    // printf("=============NUMBER_MAX_ARR=========\n");
    // max_arr(arr, n);
    // printf("\n=============NUMBER_MIN_ARR=========\n");
    // min_arr(arr, n );





}