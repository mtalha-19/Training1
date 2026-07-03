#include <stdio.h>
int main(void)
{
    float celcius, farenheit;

    printf("Enter temperature in celcius:\n");
    scanf("%f", &celcius);

    farenheit = (celcius * 9/5) + 32;

    printf("Temperature in farenheit is %.2f", farenheit);
    return 0;
}