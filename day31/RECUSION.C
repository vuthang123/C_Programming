#include<stdio.h>


int SumNorecusion(int n)

{
    int sum =0;
    for(int i=1 ;i<=n;i++){
        sum+=i;
    }
    return sum;

}
// int Sumrecusion(int n)

int main()
{
    int n;
    printf("enter number ");
    scanf("%d ",&n);

    int sum1 =SumNorecusion(n);
    printf("%d",sum1);
    // dfdferewrewrewrewrefdfdsfdsf
}