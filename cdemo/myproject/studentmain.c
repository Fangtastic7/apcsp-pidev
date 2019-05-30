#include <stdio.h>
#include <string.h>
#include "student.h" 

int main ()
{
	char cont[50];
	int i = 0;
	int n = 0;

	struct Student myStudent[25];
	do {
	enterStudent(&myStudent[i]);
	i++;
	printf("Add another? (Y/N) ");
	fgets(cont, 50, stdin);
} while (i < 25 && (cont[0] == 'Y'));

printf("\n");
for (n = 0; n < i; n++) 
	printStudent(&myStudent[n]);
}
