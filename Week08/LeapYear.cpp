#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year to check if it is a Leap year or not.\n ");
    scanf("%d", &year);

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        printf("\n %d is Leap Year. \n", year);
    else
        printf("\n %d is not the Leap Year. \n", year);

    return 0;
}