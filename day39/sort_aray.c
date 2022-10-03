
#include <stdio.h>
int enter_arr(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Nhap so phan tu vao mang arr [%d] = ",i);
        scanf("%d",&a[i]);
    }
    return 0;
}
 int export_array(int a[],int n) 
 {   
  	 int i ;
    for(i=0 ;i < n ;i++)
       {
         printf("xuat tung phan tu  a [%d] = %d\n" ,i , a[i]);

       }
     return 0 ;
 }

void increase_array(int a[],int n)
{
    int i ;
	int temp;
    for (i=0 ;i<n ;i++)
    {
        int j;
        for (j = i + 1 ;j < n  ; j++ )
        {
            if(a[i] > a[j])
            {
                temp = a[i];
         		a[i] = a[j];
         		a[j]= temp;
            }
    	}
    
    }
    
}
//decrease_array
void decrease_array(int a[],int n)
{
    int i ;
	int temp;
    for (i=0 ;i<n ;i++)
    {
        int j;
        for (j = i + 1 ;j < n  ; j++ )
        {
            if(a[i] < a[j])
            {
                temp = a[i];
         		a[i] = a[j];
         		a[j]= temp;
            }
    	}
    
    }
    
}
void print(int a[],int n)
{
	int i;
	for(i= 0 ; i < n ;i++)
	{
		printf("%5d\t", a[i]);
	}
	
}
int main()
{
    int n;
    int a [100];
    printf("Nhap n  = ");
    scanf("%d" , &n);

    printf("nhap  phan tu \n");
    enter_arr(a,n);
    printf("xuat  phan tu \n");
    
	export_array(a,n);
    
    printf("tang\n");
    increase_array(a,n);
    print(a,n);
    printf("\ngiam\n");
    decrease_array(a,n);
    print(a,n);
}