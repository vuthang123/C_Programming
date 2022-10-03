/* 
    baif tập tìm min max
    Viết hàm tìm max của 2 số có tên là MinTwoNum() để tìm max của 2 trong 3 số đó.
Sử dụng hàm tìm max 2 số vừa viết để tìm max của kết quả ở bước 1 với số còn lại.
*/
// #include<stdio.h>

// // tim min trong hai so
// int MinTwoNumber(int a,int b)
// {   
        
//         return (a < b ? a : b);
// }

// // tim max trong hai so
// int MaxTwoNumber(int a,int b)
// {   
//     int MaxTwoNumber(a > b ? a: b );
//     return MaxTwoNumber ;
// }
// // tim min trong ba so
// int MinThreeNumber(int a,int b,int c)
// {   
//     int MinThreeNumber(a,MinTwoNumber(b,c));
//     return MinThreeNumber ;
// }
// // tim max trong hai so
// int MaxThreeNumber(int a,int b,int c)
// {   
//     int MaxThreeNumber ( MaxTwoNumber(a,b),(c));
//     return MaxThreeNumber ;
// }

// int main()
// {
//     int a,b,c;
//     printf("enter three number");
//     scanf("%d%d%d",&a,&b,&c);
// }
#include <stdio.h>
 
// Hàm tìm min của 2 số
int MinTwoNum(int a, int b){
    return (a < b ? a : b);
    /*
        if (a < b) return a;
        else return b;
     */
}
 
// Hàm tìm max của 2 số
int MaxTwoNum(int a, int b){
    return (a > b ? a : b);
}
 
// Hàm tìm min 3 số nguyên
int MinThreeNum(int a, int b, int c){
    return MinTwoNum(a, MinTwoNum(b, c));
}
 
 
// Hàm tìm max 3 số
int MaxThreeNum(int a, int b, int c){
    int m = MaxTwoNum(a, b);
    int ans = MaxTwoNum(m, c);
    return ans;
}
int main(){
    int firstNum, secondNum, thirdNum;
 
    printf("\nNhap so thu nhat: "); scanf("%d", &firstNum);
    printf("\nNhap so thu hai: "); scanf("%d", &secondNum);
    printf("\nNhap so thu ba: "); scanf("%d", &thirdNum);
 
    // 
    printf("\nMin = %d", MinThreeNum(firstNum, secondNum, thirdNum));
    printf("\nMax = %d", MaxThreeNum(firstNum, secondNum, thirdNum));
    return 0;
    


}