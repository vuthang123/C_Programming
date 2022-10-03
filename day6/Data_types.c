#include<stdio.h>
#include<limits.h> // for int,char macros 
#include<float.h> // for float,double macros 
int main()
{
    char            c; 
    short           s;
    int             t;
    signed int      h;
    unsigned int    b;
    float           a;
    double          d;
    long long       n;
    // sizeof                           Byte
    printf("sizeof of char is         \t%d\n",sizeof c );
    printf("sizeof of short is        \t%d\n",sizeof s );
    printf("sizeof of int is          \t%d\n",sizeof t );
    printf("sizeof of float is        \t%d\n",sizeof a );
    printf("sizeof of unsigned int is \t%d\n",sizeof b );
    printf("sizeof of double is       \t%d\n",sizeof d );
    printf("sizeof of long long is    \t%d\n",sizeof n );
    printf("sizeof of signed int  is  \t%d\n",sizeof h );
    // Get min min_val and max_val of data _type
    printf("char ranges from                 : %d to %d",CHAR_MIN,CHAR_MAX);
    printf("\nunsigned char ranges from is   : 0 to %d" ,UCHAR_MAX);
    printf("\nint ranges form                : %d to %d ",INT_MAX,INT_MIN);
    printf("\nunsined int ranges from        : 0  to %lli ",UINT_MAX);
    printf("\nlong  ranges from              : %d to %d",LONG_MIN,LONG_MAX);
    printf("\nunsigned long ranges from is   : 0 to %lli" ,ULONG_MAX);
    
    return 0;
}