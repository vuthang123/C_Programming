#include <stdio.h>

int main() {

   int value = 100;
   int *ptr = &value;
   int **p_to_p = &ptr;

   printf("value = %d\r\n",value);
   printf("&value = %p\r\n",&value);
   
   printf("*ptr = %d\r\n",*ptr);
   printf("ptr = %p\r\n",ptr);
   printf("&ptr = %p\r\n",&ptr);


   printf("p_to_p = %p\r\n",p_to_p); 		//địa chỉ ô nhớ của ptr
   printf("*p_to_p = %p\r\n",*p_to_p); 		//địa chỉ ô nhớ mà ptr trỏ đến
   printf("**p_to_p = %d\r\n",**p_to_p); 	//giá trị tại địa chỉ ô nhớ ptr trỏ đến

   return 0;
}
/*
	Sau khi xem ví dụ chúng ta có thể rút ra các kết luận như sau:

	Bản chất của con trỏ cấp 2 vẫn là một con trỏ, nên khi truy xuất giá 
trị của p_to_p chúng ta lấy được địa chỉ mà nó trỏ đến (địa chỉ của biến ptr).


	p_to_p tương đương với &ptr: chính là địa chỉ mà con trỏ cấp 2 trỏ tới,
 hay chính là địa chỉ của con trỏ ptr.


	*p_to_p tương đương với ptr: chính là giá trị của con trỏ ptr, hay cũng 
chính là địa chỉ ô nhớ mà ptr trỏ tới, cũng chính là địa chỉ của biến value.


	**p_to_p tương đương với *ptr hay chính là giá trị ô nhớ mà con trỏ ptr 
trỏ tới, cũng chính là giá trị của biến value. 

*/