#include <stdio.h>
#include <stdint.h>

typedef struct Rectangle
{
    int perimeter;
    int area;
} RecTypes;

RecTypes RectangleCalc(int a, int b)
{
    RecTypes temp;
    temp.area = a * b;
    temp.perimeter = (a + b) * 2;
    return temp;
}

void main()
{
    RecTypes Rec1 = RectangleCalc(5, 6);

    printf("%d\n", Rec1.area);
    printf("%d\n", Rec1.perimeter);
}