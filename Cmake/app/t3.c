/*
	Cho mảng char A[32] (32byte), uint16_t B[16] (32 byte), copy từ A->B và B->A sao cho khi in 
2 mảng ra giống nhau theo hình thức Binary.
Cách làm dùng MACRO chưa tối ưu tốc độ, làm lại bằng cách track mảng bằng con trỏ khác kiểu ok.

*/
#include<stdio.h>
#include<stdint.h>


void main()
{
	char A[32] = {'A','B'};
	uint16_t B[16] ;
	//uint16_t *ptr = &A[0];
	//B[0] = *ptr;
	
	B[0] =( A[1] | (uint16_t) A[0] << 8); 
	if (*(uint16_t*)&B[0])
	{
		printf("%d\n", B[0]);
		printf("LSB");
	}else{
		printf("MSB");
	}
	//printf("%d\n", B[0]);
	
}