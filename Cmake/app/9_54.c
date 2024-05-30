#include<stdio.h>

int main() {
    int row,col,i,j,sum =0 ;
    int a[500][600];
    
    scanf("%d%d",&row,&col);

    for(i= 0 ; i < row; i++)
    {
        for(j=0 ;j < col; j++){
            scanf("%d",&a[i][j]);
        }
    }

//    for(i= 0 ; i <row;i++)
//    {
//        for(j=0 ;j<col;j++){
//            sum+=a[i][j];
//        }
//    }
  //  printf("%d",sum);
    return 0;
}
