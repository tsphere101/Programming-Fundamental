#define _CRT_SECURE_NO_WARNINGS
//Magnitude and direction of vector
#include <stdio.h>
#include <math.h>
#define PI 3.1415926535
double direction(double, double);
double magni(double,double);

int main()
{
    double x, y, deg, mag;
    printf("Enter the vector composite\n(ex 3 4) : ");
    scanf("%lf %lf", &x, &y);
    printf("Vector's magnitude is : %.2f\nVector's direction is : %.2f degrees", magni(x,y),direction(x,y));
    return 0;
}

double magni(double x, double y)
{
    double result;
    result = sqrt(x * x + y * y);
    return result;
}

double direction(double x, double y)
{
    double deg;
    if (x == 0)
    {
        if (y > 0){deg = 90;}
        else if (y < 0){deg = -90;}
        else if (y == 0){deg = 0;}
    }
    if (y == 0) 
    {
        if (x > 0) { deg = 0; }
        else if (x < 0) { deg = 180; }
    }
    if (x > 0 && y > 0) {deg = atan(y/x) * 180/PI;}
    else if (x < 0 && y > 0) {deg = atan(y/x)* 180/PI + 180;}
    else if (x>0 && y < 0) {deg = atan (y/x)* 180/PI;}
    else if (x < 0 && y < 0) {deg = atan(y/x)* 180/PI + 180;}
    
    return deg;
}