#include <stdio.h>
int main()
{
    float principle, rate, time, interest;

    printf("Enter principle, rate and time");
    scanf("%f %f %f", &principle, &rate, &time);

    interest = (principle * rate * time) / 100;

    printf("Simple interest = %.2f:\n", interest);

    return 0;
}