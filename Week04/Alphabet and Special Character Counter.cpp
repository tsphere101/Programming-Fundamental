//Alphabet and Special Character Counter
#include <stdio.h>
int lengthOf(char*);
int alphaCount(char*);
int specialistCount(char*);
int numCount(char*);
int spaceCount(char*);

int main()
{
	char input[500];
	printf("Enter string to count : ");
	gets_s(input);

	printf("\nString : %s\n", input);
	
	printf("String length : %d \n", lengthOf(input));
	printf("Alphabet amount : %d \n", alphaCount(input));
	printf("Special Character amount : %d \n", specialistCount(input));
	printf("Number amount : %d\n", numCount(input));
	printf("Space : %d", spaceCount(input));

	return 0;
}

int lengthOf(char* string)
{
	int i;
	for (i = 0; string[i] != '\0'; i++) {}
	return i;
}

int alphaCount(char* string)
{
	int i = 0, k = 0;
	while (string[i] != '\0')
	{
		if (!((string[i] < 'A') || (string[i] > 'Z' && string[i] < 'a') || (string[i] > 'z'))) { k++; }
		i++;
	}
	return k;
}

int specialistCount(char* string)
{
	int k = 0, i = 0;
	while (string[i] != '\0')
	{
		if ((string[i] < 'A') || (string[i] > 'Z' && string[i] < 'a') || (string[i] > 'z')) { k++; }
		i++;
	}
	return k - numCount(string) - spaceCount(string);
}

int numCount(char* string)
{
	int i,k=0;
	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= '0' && string[i] <= '9') { k++; }
	}
	return k;
}

int spaceCount(char* string)
{
	int i, k = 0;
	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == ' ') { k++; }

	}
	return k;
}