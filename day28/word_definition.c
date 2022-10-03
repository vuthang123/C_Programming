/*
    Hàm dinh nghia
    cách khai báo hàm 
    <kiểu dữ liệu > <name funstion> (<các tham số>)
    {
        (statement)
        //value cùng kieu dữ liệu
        
        return <value>  
    }
*/

#include<stdio.h>
// sum
int sum (int a ,int b)
    {
        int sum = a + b ;
        return sum ;
    }
//sub
int sub (int a ,int b)
    {
        int sub = a - b ;
        return sub ;
    }
//mul 
int mul (int a ,int b)
    {
        int mul = a * b ;
        return mul ;
    }
//div
float div (float a ,float b)
    {
        float div = a / b ;
        return div ;
    }


int div_remainder (int a ,int b)
    {
        int div_remainder = a % b;
        return div_remainder ;
    }
int main()       
{   
    printf("sum 3 va 4 la %d",sum (3,4));
    printf("\nsub 3 va 4 la %d",sub(3, 4));
    printf("\nmul 3 va 4 la %d",mul(3 , 4));
   
   
    int  a=3,b=4.0;
    
    printf("\ndiv 3 va 4 la %.2f",div(a, b));
    
    
    int c=4,d=3.0;
    
    printf("\ndiv_remainder 3 va 4 la %.2f",(float)div_remainder(c,d))

}