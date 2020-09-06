#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
//Turn Sentence To camelCase
void camelNow(char*);
char upperCase(char);
char lowerCase(char);
int main()
{
	char input[500];
	printf("Enter a sentence to make it camelCase\n(ex. I LOVE a dOG): ");
	fgets(input, 500, stdin);
	printf("Old : %s", input);
	camelNow(input);
	printf("camelCased : %s", input);

	return 0;
}

void camelNow(char* text)
{

	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == ' ')
		{
			int j;
			for (j =i; text[j] != '\0'; j++)
			{
				text[j] = text[j + 1];

			}
			i--;
			text[i+1] = upperCase(text[i+1]);
			for (int k = i + 2; text[k] != '\0'; k++)
			{
				text[k] = lowerCase(text[k]);
			}
			text[j] = '\0';
			
		}
	}
	text[0] = lowerCase(text[0]);
}

char upperCase(char text)
{
	if (text >= 'a' && text <= 'z')
	{
		return text - 32;
	}
	else return text;
}
char lowerCase(char text)
{
	if (text >= 'A' && text <= 'Z')
	{
		return text + 32;
	}
	else return text;
}