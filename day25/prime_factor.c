/*phân tích cách thừa số nguyên tố 
error 29/7/2022
ko thực hiện đươc statements while
mote :  sau while ko được phép bao giừo có dấu chấm phẩy (;)
có dấu ; sẽ ko bao giừ thưc hiện câu lệnh statement loop While
*/  
#include <stdio.h>
 int main()
{
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    
    int dem;
    
    for(int i = 2; i <= n; i++)
    {
        dem = 0;
        while(n % i == 0)
        {
            ++dem;
            n /= i;
        }
        if(dem)
        {
            if(dem > 1) 
                printf("%d^%d", i, dem);
            else
                 printf("%d", i);
            if(n > i)
            {
                printf(" * ");
            }
        }
    }
    
}