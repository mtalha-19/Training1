#include <stdio.h>
int main(void)
{
    printf("Size of char[10]    = %zu bytes\n", sizeof(char[10]));
    printf("Size of int[10]     = %zu bytes\n", sizeof(int[10]));
    printf("Size of float[10]   = %zu bytes\n", sizeof(float[10]));
    printf("Size of double[10]  = %zu bytes\n", sizeof(double[10]));

    return 0;
}