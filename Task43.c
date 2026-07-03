#include <stdio.h>
int main(void)
{
   int i, sum = 0;
int a[5] = {10, 20, 30, 40, 50};

for (i = 0; i < 5; i++) {
    sum += a[i];
}

printf("Sum = %d", sum);
return 0;
}