#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double max(double a, double b,double c)
{
    double temp = (a > b) ? a : b;
    double maxV = (temp > c) ? temp : c;
    return maxV;
}

int main()
{
    double a, b, c;
retry:
    printf("Input 3 numbers to check if they're the sides which possible to form a triangle : ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0) {printf("input must be greater than 0! \ntry again\n");goto retry;}

    if (max(a,b,c)*max(a,b,c) == a*a + b*b +c*c - max(a,b,c)*max(a,b,c)) {printf("Those 3 numbers are possible to form a triangle.");}
    else {printf("Those numbers have no possibility to form a triangle.");} 
    
    return 0;
}