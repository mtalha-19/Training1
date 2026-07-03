#include <stdio.h>
int main()
{
    int i;
    int maxnum[5] = {21, 54, 82, 96, 37};
    int max = maxnum[0];

    for(i = 1; i < 5; i++)
    if(maxnum[i] > max)
        max = maxnum[i];
    
        printf("The largest number is: %d\n", max);
    return 0;
}