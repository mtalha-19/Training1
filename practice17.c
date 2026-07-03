#include <stdio.h>
int main(void)
{
    int a, b, c, d;
    printf("Enter the number ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a>= b && a >= c && a >= d)
        printf("Largest number of :%d\n", a);
    else if (b >= a && b>= c && b >= d)
        printf("Largest number is:%d\n ", b);
    else if (c >= a && c >= b && c >= d)
        printf("Largest number is:%d\n", c);
    else 
        printf("Largest number is :%d\n", d);
        
        return 0;
}