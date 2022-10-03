/*
    nhap vao so nguyen a va b
    nhap vao phep toan +-
    thuc hien phep toan cho hai so 
*/

#include<stdio.h>
int main()
{
    int a,b;
    char opera;
    printf("nhap phep toan\t ");
    scanf("%c",&opera);

    printf("nhap hai so a,b =");
    scanf("%d%d",&a,&b);

    switch (opera){
        case '+' :
        {
            printf(" phep sum\t %d+%d=%d ",a,b,(a+b));
            break;
        }
        case '-' :
        {
            printf(" phep sub\t %d-%d=%d  ",a,b,(a-b));
            break;
        }
        case '*' :
        {
            printf(" phep mul\t %d*%d=%d ",a,b,(a*b));
            break;
        }
        case '/' :
        {
            if (b==0)
            {
                printf(" a khong chia duoc cho b");

            }
             else{
                printf(" phep chia\t %d/%d=%d ",a,b,(a/b));

             }
            break;
        }
    default:
    printf("\nkhong co phep taon nao thuc hien ", opera);
    }   
}