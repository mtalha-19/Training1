#include <stdio.h>
int main()
{
    int i, sum = 0;
int x[4] = {2, 4, 6, 8};

for (i = 1; i < 4; i++) {
    sum += x[i];
}
printf("Sum hua %d", sum);
}