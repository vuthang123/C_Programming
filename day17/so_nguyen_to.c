
// prime numbers so nguyen to 
/*
In ra các số nguyên tố nhỏ hơn 1000.
Bài tập nhỏ:
1. Kiểm tra số nhập từ bàn phím có phải SNT không?
2. Kiểm tra và in ra các SNT nhỏ hơn 1000
*/
// caau hoir lowns

#include<stdio.h>
#include<math.h>
int main ()
{
    int a;
    printf("enter a=");
    scanf("%d",a);
    
    int i ;
    int count = 0;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a % i == 0)
        {
            count++;
        }
        
    }
    if (count==2 && a>1)
    {
        printf("%d is prime number",a);
    }
    else {
        printf("%d isn't prime number",a);
    }
}
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int a;
//     printf("\nNhap a = ");
//     scanf("%d", &a);
 
//     int i = 2;
//     int count = 0; // đếm số ước của a
//     for (; i <= sqrt(a); i++)
//     {
//         if (a % i == 0)
//         {
//             count++;
//         }
//     }
 
//     if(count == 0 && a > 1){
//         printf("\n%d la SNT!", a);
//     }else{
//         printf("\n%d khong la SNT!", a);
//     }
// }