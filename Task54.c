#include <stdio.h>
int main()
{
    float lenght, width, area;

    printf("Enter the lenght of rectangle:\n");
    scanf("%f", &lenght);

    printf("Enter the width of rectangle\n");
    scanf("%f", &width);

    area = lenght * width;
    printf("Area of rectangle is %.2f\n", area);

    return 0;
}