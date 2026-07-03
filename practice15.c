#include <stdio.h>
int main(void)
{
    int m;
    printf("Enter the limit\n ");
    scanf("%d ", &m);

    for(int i = 1; i <= m; i++){
        printf("%d ", i);
    }
    return 0;
}