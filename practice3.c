#include <stdio.h>
int main()
{
    float Cel, Fahr;
    printf("Enter the temperature in Celcius\n");
    scanf("%f", &Cel);

    Fahr = 9.0/5.0 * Cel + 32;
    printf("Tmperature in Fahrenheit is %.3f", Fahr);

    return 0;
} 