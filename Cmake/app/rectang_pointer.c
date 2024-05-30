#include <stdio.h>
#include <stdint.h>

typedef struct Rectangle
{
    int a;
    int b;
    int perimeter;
    int area;
} RecTypes;

void RectangleCalc(RecTypes * temp)
{
    temp->area = temp->a * temp->b;
    temp->perimeter = (temp->a + temp->b) * 2;
}

void main()
{
    RecTypes Rec1 = {5, 6, 0, 0};
    RectangleCalc(&Rec1);

    printf("%d\n", Rec1.area);
    printf("%d\n", Rec1.perimeter);
}