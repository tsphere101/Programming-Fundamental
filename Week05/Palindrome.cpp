#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPalindrome(char*);

int main()
{
	char input[500];
	printf("Enter the sring to check if it is Palindrom\n : ");
	gets_s(input, 499);
	if (isPalindrome(input))
	{
		printf("Palindrome");
	}
	else { printf("Not Palindrome"); }
	return 0;
}

int isPalindrome(char* input)
{
	char* back = input;
	char* front = input;
	while (*back != '\0')
	{
		back++;
	}
	back--;

	for (; back >= front; back--)
	{
		if (*back != *front) { break; }
		front++;
	}
	if (front > back) { return 1; }
	else { return 0; }
}