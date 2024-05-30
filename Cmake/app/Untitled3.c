#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
typedef struct{
	
	int x;
	int y;
	
	
}date;

date point_print(date *mydate)
{
	printf("(%d,%d)",mydate->x,mydate->y);
	
}
void main()
{
	date mydate;
	
	mydate.x=10;
	mydate.y=20;

	point_print(&mydate);

}
