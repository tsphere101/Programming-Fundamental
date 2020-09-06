#include <stdio.h>

int main()
{
    double input, Celsius, Fahrenheit, Kelvin;
    char unit[1];
    printf("Tempurator Converter\nEnter the temp.(ex. 25 c) (ex. 273 K) (ex. -44.5f)\n :");

    scanf("%lf", &input);
    scanf("%s", unit);
    int wasd = *unit;
    switch (wasd)
    {
    case 'f':
    {
        Celsius = (input - 32.0) / 1.8;
        Kelvin = Celsius + 273.15;
        Fahrenheit = input;
    }
    break;

    case 'F':
    {
        Celsius = (input - 32.0) / 1.8;
        Kelvin = Celsius + 273.15;
        Fahrenheit = input;
    }
    break;

    case 'C':
    {
        Fahrenheit = (input * 1.8) + 32.0;
        Kelvin = input + 273.15;
        Celsius = input;
    }
    break;

    case 'c':
    {
        Fahrenheit = (input * 1.8) + 32.0;
        Kelvin = input + 273.15;
        Celsius = input;
    }
    break;

    case 'K':
    {
        Celsius = input - 274.15;
        Fahrenheit = (Celsius * 1.8) + 32.0;
        Kelvin = input;
    }
    break;

    case 'k':
    {
        Celsius = input - 273;
        Fahrenheit = (Celsius * 1.8) + 32.0;
        Kelvin = input;
    }
    }

    printf("Celsius\t\tFahrenheit\tKelvin\n");
    printf("%.2f\t\t%.2f\t\t%.2f", Celsius, Fahrenheit, Kelvin);
    return 0;
}