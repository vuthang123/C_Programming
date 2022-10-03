#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    printf("Before swapping: a = %d, b = %d", a, b);
    // Code to swap a and b:
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nAfter swapping: a = %d, b = %d", a, b);
    return 0;
}