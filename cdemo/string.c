#include <stdio.h>
#include <string.h>


char alphabet[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
char alphabet2[27]; 
int main()
{
  // str1 is a pointer to a constant - cannot change the contents of str1

  for(int i=0;i<26;i++){
alphabet2[i] = 'a' + i; 
printf("%c", alphabet2[i]); 
printf("\n");
 
}
if(strcmp(alphabet, alphabet2) ==0){
printf("These strings are identical\n");
}
else{
printf("These strings are not identical\n");
}
for(int i=0;i<26;i++){
alphabet[i] = 'a' + i -32; 
printf("%c\n", alphabet[i]);
}
if(strcmp(alphabet, alphabet2)==0){
printf("These strings are identical\n");
}
else{
printf("These strings are not identical\n");
}
 
printf("%s\n",strcat(alphabet, alphabet2));
//  printf("str1 : %s\n", alphabet1);

  // DO NOT DO THIS - attempt to modify a character in a string constant
  //   compiler will not complain though
  //*(str1 + 3) = 'c';


  
  // str2 is an array which holds a copy of the string constant
  char str2[7] = "hello2";
  
  printf("str2 : %s\n", str2);

  char* str2p = str2;
  *(str2p + 3) = 'c';  // OK to modify array
  printf("str2 : %s\n", str2p);
  

  
  // str3 is also an array which holds a copy of the constant
  //   intialized to hold the string length
  char str3[] = "this is a test";
  printf("str3 : %s\n", str3);

  str3[3] = 'f';
  printf("str3 : %s\n", str3);
}
