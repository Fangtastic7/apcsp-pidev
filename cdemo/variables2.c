
#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;
int d; 
  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
printf("Inital value of a: %d and initial value of c %d\n", a, c);
d = a; 
a =c;
c=d;
printf("Value of a: %d and Value of c: %d\n", a, c); 
 

}
