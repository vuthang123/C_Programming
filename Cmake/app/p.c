#include <stdio.h>
int main()
{
    int a = 2, *p;
    p = &a;
    //*p = a;
    //p = a;
    *p += a++;
    printf("%d %d", *p, a);
    return 0;
}