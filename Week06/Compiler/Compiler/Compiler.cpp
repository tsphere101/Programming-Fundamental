#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char* strCon(char*, char*);

int main()
{
	char a[500],b[500];
	printf("This program concentrate 2 strings\n");
	printf("Enter first string :");
	gets_s(a, 500);
	printf("Enter second string :");
	gets_s(b, 500);

	printf("%s", strCon(a, b));

	return 0;
}

char* strCon(char* a, char* b)
{
	int i = 0,j = 0;
	for (i = 0; a[i] != '\0'; i++);
	for (j = 0; b[j] != '\0'; j++, i++)
	{
		a[i] = b[j];
	}
	a[i] = '\0';
	return a;
}