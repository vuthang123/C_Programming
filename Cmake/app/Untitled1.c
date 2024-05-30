#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void main (){//b->a
//	uint8_t A[2];
//	uint16_t B[1] = {16961};
//	
//	uint8_t *ptr =(uint8_t*)&B[0];
//	
//	A[0] = *ptr;
//	A[1] = *(ptr +1);
//	
// 	printf("%d",*ptr);
 	
 	int x = 1 ;
 		if (*(char*)&x)
 		{
 			printf("LSB");
		 }
		 else 
		 {
		 	printf("MSB");
		 }
}
