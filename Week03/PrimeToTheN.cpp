// PrimeToTheN
#include <stdio.h>
int isPrime(int n);
int main()
{
    int num, i,c = 1;
    printf("This program shows list of first n Prime Numbers\n");
    printf("Enter the amount : ");
    scanf("%d", &num);
    for (i = 2; c <= num; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
            c++;
        }
    }
}

int isPrime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}