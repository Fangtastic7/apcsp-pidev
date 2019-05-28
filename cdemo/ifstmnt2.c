#include <stdio.h>

int main()
{
  int a = 0;
int b = 3;
  // if statement to test is a is equal to 0
  if (a == b)
  {
    printf("a is b\n");
  }
else if(a != b){
printf("a is not equal\n");
}
else if(a < b){
printf("a is greater than b\n");
}
else if(a >= b){
printf("a is greater equal to b\n"); 
}
else if (a==0 && b ==0){
printf("a and b are equal to 0\n"); 
}
else if(a==0 || b==0){
printf("a or b is equal to 0\n"); 
}
else if(!(a==0)){
printf("a is not 0\n");
}
  else
  {
    printf("a is not 0\n");
  }
    
}
