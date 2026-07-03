#include <stdio.h>
int main(void)
{
    int i;
    printf("Enter a grade");
    scanf("%d", &i);

    if (i >= 60){
        puts("Passed");
    } else {
        puts("Failed");
    }
    return 0;

}