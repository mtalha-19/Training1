#include <stdio.h>
#include <math.h>
int main()
{
    float  area, radius;
    printf("Enter the radius of circle:\n");
    scanf("%f", &radius);
    
    area = 3.14 * radius * radius;
    printf("Area of the circle is %0.2f", area);

    return 0;
}