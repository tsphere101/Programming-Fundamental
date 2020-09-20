#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print(double*, int);
void sort(double* arr, int amnt);
int main()
{
	
	int num, i = 0;
	double input;
	double arr[1000];

	printf("==Number Sorting Program==\nEnter each numbers and press \"Enter\"\nEntering any character will exit the program.\n");
	while (1)
	{
		
		if (scanf_s("%lf", &input)) {
			arr[i] = input;
			print(arr, i);
			i++;
		}
		else goto end;
	}
end:
	return 0;

}

void print(double* inputArr,int amnt)
{
	sort(inputArr,amnt);
	printf("Sorted : ");
	for (int i = 0; i <= amnt; i++)
	{
		printf("%.2f ",inputArr[i]);
	}
	printf("\n");
}
void sort(double* arr, int amnt)
{
	int j = 0;
	for (int i = 0; i <= amnt; i++)
	{
		for (int j = 0; j < amnt; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
