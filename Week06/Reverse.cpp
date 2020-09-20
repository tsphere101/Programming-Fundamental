#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void rev(char*);
int countChar(char* input);
int main()
{
	char input[500];
	printf("Enter the string to reverse.\n");
	gets_s(input, 500);
	rev(input);
	printf("%s",input);
	return 0;
}

void rev(char* input)
{
	char* red = input, *blue = input+countChar(input)-1;
	for (int i = 0; i <= countChar(input)/2; i++)
	{
		char temp = *red;
		*red = *blue;
		*blue = temp;
		red++;
		blue--;
	}
}

int countChar(char* input)
{
	int i = 0;
	while (input[i] != '\0') i++;
	return i;
}
