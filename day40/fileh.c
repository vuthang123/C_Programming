// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("test.txt","r+");

//     if(ptr!= NULL)
//     {
//         printf("Open file ");
//     }
//     else {
//         printf("open file unseccesfully");
//     }

//     fclose(ptr);
// }
// #include <stdio.h>

// int main()
// {
//    FILE * pFile;
//    char mystring [100];

//    pFile = fopen ("test.txt" , "r+");
//    if (pFile == NULL) perror ("Error opening file");
//    else {
//      if ( fgets (mystring , 100 , pFile) != NULL )
//        puts (mystring);
//      fclose (pFile);
//    }
//    return 0;
// }
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>

void READ_FILE(FILE *ptr, char *check)
{     

    char KEY ;
    
	uint8_t i = 0;
	
	    while(KEY != '\n')
		{  
        KEY = fgetc(ptr);
        ++i;
		}
		
		fseek(ptr , -(i + 1), SEEK_CUR );
		
		fgets( check, i, ptr);
		
		printf("%s\n",check);	
	    
}
int main() {
  
}