#include<stdio.h>

int main(int argc, char* argv[])

{

  unsigned int i=0, a;

  a = i++;

  printf("i before: %d; value returned by i++: %d, i after: %d\n", i, a, i);

  i=0;

  a = ++i;

  printf("i before: %d; value returned by ++i: %d, i after: %d\n", i, a, i);

}