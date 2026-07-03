#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter the number\n ");
    scanf("%d ", &num);

    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", num, i , num * i);
    }
    return 0;
}