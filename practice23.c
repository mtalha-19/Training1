#include <stdio.h>
int main (void)
{
    int n, i = 1, sum = 0;
    
    printf("Enter a number\n");
    scanf("%d", &n);

    do {
    sum += i;
    i++;
}  while (i <= n);
    
    printf("sum = %d\n", sum);
    return 0;

}