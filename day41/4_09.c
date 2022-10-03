#include<stdio.h>

int main() {
    int n,i,a[10];
    scanf("%d",&n);

    for(i=0 ;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int maxvalue = a[0];
    for(i=0 ;i<n; i++)
    {
        if(a[i] > maxvalue){
            maxvalue = a[i];
        }
    }
    printf("%d",maxvalue);
    return 0;
}

