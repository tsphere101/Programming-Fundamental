#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char* uniq(char*);
int UniqIsEqual(char* a, char* b);

int main()
{
	char A[500];
	char B[500];
	printf("This program check if unique a == unique b\n");
	printf("Ex. aaabbbbc and abc\n");
	printf("Input string A : ");
	gets_s(A,499);
	printf("Input string B : ");
	gets_s(B, 499);
	if (UniqIsEqual(A,B))
	{
		printf("\nOutput : TRUE");
	}
	else printf("\nOutput : FALSE");
	
	return 0;
}

int UniqIsEqual(char*a,char*b)
{
	a = uniq(a); b = uniq(b);
	char* pA, *pB;
	pA = a;
	pB = b;
	int flag = 0;
	while (*pA != '\0' && *pB != '\0')
	{
		if (*pA != *pB) { flag++; break; }
		pA++;
		pB++;
	}
	if (flag == 0) { return 1; }
	else return 0;
}

char* uniq(char* input)
{
	char result;
	char* ptr,*pj;
	ptr = input;

	
	while (*ptr != '\0') //check for every elements of the array
	{
		if (*(ptr + 1) == *ptr) // if found repeated element
		{
			for (pj = ptr;*pj != '\0';pj++)  // move the next element to current
				{
					*pj = *(pj + 1);
				}
			*pj = '\0'; // remove the last element of the arr.
			ptr--; // recheck
		}
		ptr++;
	}
	return input;
}