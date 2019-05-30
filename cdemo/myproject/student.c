#include "student.h"
#include <stdio.h>

int enterStudent (struct Student* student)
{
	char first[50], last[50];
	char studentAge[50], studentId[50];
	int yearsOld;
	int studentNumber;

while (1)
{
	printf("First name?");
	fgets(first, 50, stdin);
	if (sscanf(first, "%s", student->fname) == 1) break;
		printf("Choose a better name.");
}

while (1)
{
	printf("Last name?");
	fgets(last, 50, stdin);
	if (sscanf(last, "%s", student->lname) == 1) break;
		printf("Choose a better surname.");
}

while (1)
{
	printf("Age?");
	fgets(studentAge, 50, stdin);
	if (sscanf(studentAge, "%d", &yearsOld) == 1) break;
		printf("Inappropriate age.");
}
student->age = yearsOld;

while (1)
{
	printf("Id?");
	fgets(studentId, 50, stdin);
	if (sscanf(studentId, "%d", &studentNumber) == 1) break;
		printf("Inappropriate Id number.");
}
student->id = studentNumber;
}

int printStudent (struct Student* student)
{
	printf("First name: %s\nLast name: %s\nAge: %d\nId: %d\n\n", student->fname, student->lname, student->age, student->id);
}

