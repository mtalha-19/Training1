#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a positive integer:\n ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum =sum + i;
    }
    printf("sum of number 1 %d is: %d\n", n, sum);

    return 0;
}