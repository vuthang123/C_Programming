#include <stdio.h>
int dma_done_flag = 0; 
void dma_isr()
{
	dma_done_flag = 1;
}
int main(void)
{
    
	while(dma_done_flag==0){}
 
    return 0;
}