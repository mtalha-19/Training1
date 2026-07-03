#include <stdio.h>
void calculatesquare(int number){
    int square = number * number;
    printf("square of %d is %d\n", number, square);
}

int main()
{
    calculatesquare(7);
}