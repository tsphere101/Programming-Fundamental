#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void convertMe(char*);
void remove(char*);
int main()
{	
	printf("Input (ex.aB$Cde%%f#) : ");
	char input[500];
	gets_s(input,500);

	remove(input);
	convertMe(input);

	printf("Output : ");
	printf("%s",input);
	
	

	return 0; 
}


void remove(char* input)
{
	char* myPointer = input;
	int i;
	while (*(myPointer) != '\0')
	{
		if ((*myPointer < 'A') || ((*myPointer > 'Z') && (*myPointer < 'a')) || (*myPointer > 'z'))
		{

			for (i = 0; *(myPointer + i) != '\0'; i++)
			{
				*(myPointer + i) = *(myPointer + i + 1);
			}
			*(myPointer + i) = '\0';
			myPointer--;
		}
		myPointer++;
	}
}

void convertMe(char* input)
{
	char* myPointer = input;
	while (*myPointer != '\0')
	{
		int j = 0;
		if (*myPointer >= 'a' && *myPointer <= 'z')
		{
			*myPointer = *myPointer - 'a' + 'A';
		}
		else if (*myPointer >= 'A' && *myPointer <= 'Z')
		{
			*myPointer = *myPointer - 'A' + 'a';
		}
		myPointer++;
	}
	
}