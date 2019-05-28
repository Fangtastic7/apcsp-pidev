#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

float e =  1;
float d = 2; 
printf("The value of e: %f\n  The value of d: %f\n", e, d);
printf("The address of e: %f\n The address of d: %f\n", &e, &d);
float* p = &e;
float* t = &d;
float p2 = *p;
float t2 = *t;
*p = 25; 
*t = 20; 
printf("e=%f,d=%f\n",e,d); 
}
