#include<stdio.h>
#include<stdint.h>
#include <math.h>
long long Dec2Bin(uint32_t decimalNumber) // Ctrl H => find & replace
{
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}
void main()
{
	char A[2] = {'A','B'};
	uint16_t B[1] ;
	//uint16_t *ptr = &A[0];
	//B[0] = *ptr;
	
	B[0] =( A[1] | (uint16_t) A[0] << 8); 
	
//	printf("%d\n", B[0]);
	
//	printf("Bin = %d", Dec2Bin(10000));
	
}
