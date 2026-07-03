#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter two floating-point numbers:\n");
    scanf("%f %f", &a, &b);

    float product = a * b;

    printf("Product = %.2f\n", product);
    return 0;
}