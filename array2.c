#include <stdio.h>



int arrayadd(int arr[], int s, int n);
int arr[100];
int main()
{
  // create an int array 5 long
    
  for (int i = 0; i < 100; i++)
  {
    arr[i] = i * i;
	printf("index %d is at %d\n", i, arr[i]);
  }
arrayadd(arr, 100, 2);
 for (int i = 0; i < 100; i++)
  {
        printf("index %d is at %d\n", i, arr[i]);
  } 
//  printf("1st and 3rd vals: %d, %d\n", arr[0], arr[2]);
  
 // printf("Or %d, %d\n", *arr, *(arr+2));

  
  // create array to hold intialized values
//  int arr2[] = { 1, 2, 3, 4 };
//  for (int i = 0; i < 4; i++)
 // {
  //  printf("%d, ", arr2[i]);
 // }
 // printf("\n");
  
}
int arrayadd(int arr[], int s, int n){
for(int i=0; i<s; i++){
 arr[i] = arr[i] + n;
}
return 0;
  
}
