// CubicCalculator
#include <stdio.h>
#include <math.h>
double diagonal(double length);
double surface(double length);
double area(double length);
double Vol(double length);

int main()
{
    double num;

    printf("Enter the length of cubic : ");
    if (scanf("%lf", &num))
    {
        if (num > 0)
        {
            printf("Area : %.2f\nVolume : %.2f\nSurface : %.2f\nDiagonal : %.2f", area(num), Vol(num), surface(num), diagonal(num));
        }
        else
        {
            printf("Input must be greater than 0!");
        }
    }
    else
    {
        printf("Please enter the number!\n");
    }
    return 0;
}

double diagonal(double length)
{
    double result = length * (sqrt(3));
    return result;
}

double surface(double length)
{
    double result = 6 * area(length);
    return result;
}

double area(double length)
{
    double result = length * length;
    return result;
}

double Vol(double length)
{
    double result = length * length * length;
    return result;
}