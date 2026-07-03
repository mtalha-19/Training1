#include <stdio.h>
int main(void)
{
    int i;
    printf("Enter the grade");
    scanf("%d", &i);

    if (i >= 90){
        printf("Excelent  A++");
    } else if (i >= 80) {
        puts("Good  A");
    } else if ( i >= 70){
        puts("B");
    } else if ( i >= 60) {
        puts("C   Passed");
    } else if (i >= 50){
        puts("D   Passed");
    } else if (i < 40){
        puts("F   Failed");
    }
    return 0;
}