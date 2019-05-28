#include<stdio.h>

int main()
{
  int a = 545;
char  b = 'a';
float c = 12.34;
double d = 123.456;
signed int e = 5; 
unsigned int f = 7; 
  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
printf("char b value: %c and size %c bytes\n", b, sizeof(b)); 
printf("float c value: %f and size %f bytes\n", c, sizeof(c)); 
printf("double d value: %d and size %d bytes\n", d, sizeof(d)); 
printf("signed e value: %d and size %d bytes\n", e, sizeof(e));
printf("unsigned f value: %d and size %d bytes\n", f, sizeof(f));
}

