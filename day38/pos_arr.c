 #include<stdio.h>
 #define MAX 100
 int enter_array (int a[], int n)
{   
    int i ;
    for(i=0 ; i < n ; i++)
    {
        printf("enter elements array arr[%d] = ", i);
        // ko đc có 2 khoảng trẳng trong scan(" %d ",&....);
        // fix scan("%d",&....);

        scanf("%d",&a[i]);
    }
    return 0 ;
}
 int exort_array (int a[],int n)
 {
    int i=0 ;
    for(i=0 ;i<n; i++)
    {
        printf("export_array arr[%d] = %d\n" , i , a[i]);
    }
    return 0 ;
 }
 int max_element(int a[],int n)
 {
    int i=0 ,max = a[i]; 
    for(i=0 ; i<n ; i++)
    {
        if (max < a[i])
        {
            max  = a[i];
        }
    }
    // printf("\nmax elements %d\n",max);
    return max ;
 }
 void get_arr_position(int a[], int n)
 {

    int i = 0 ;
    int maxvalue = max_element(a, n);

    for ( i =0 ; i < n ;i++)
    {
        if (a[i] == maxvalue)
        {
            printf( " elements position %d  " ,(i+1));
        }
    }
   
 }
 int main()
 {
    int n;
    int arr[MAX];
    printf("enter elements n =");
    scanf("%d",&n);

    printf("================enter_array==============\n" );
    enter_array(arr,n);
    printf("================export_array=============\n" );
    exort_array(arr , n);
    
    // // printf("================max_element==============\n" );
    // max_element(arr,n);
    // printf("================postion_max==============\n" );
    // get_arr_position(arr , n);


 }