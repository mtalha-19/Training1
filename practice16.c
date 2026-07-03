#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int num, value;
    value = 1 + rand() % 10;
    printf("enter a number:");
    scanf("%d", &num);

    while(num == value)
    {
    if(num == value)
    {
        printf("You got me!");

    }
    else 
    {
        printf("Try again");
    }
}
}