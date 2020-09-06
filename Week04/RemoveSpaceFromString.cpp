#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//remove space from string
void remove(char*);
int main()
{
	char input[500];
	fgets(input, 500, stdin);
	remove(input);
	printf("%s",input);
	return 0;
}
void remove(char* text)
{
	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == ' ') {
			int j;
			for (j = i; text[j] != '\0'; j++) {
				text[j] = text[j + 1];
			}
			text[j] = '\0';
			i--;
		}
	}
}
