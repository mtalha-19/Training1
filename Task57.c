#include <stdio.h>
int main()
{
    char ch;
    
    printf("Enter a character:\n ");
    scanf("%c", &ch);

    printf("ASCII value of %c = %d\n", ch, ch);
    return 0;
}