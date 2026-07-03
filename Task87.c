#include <stdio.h>
int main()
{
    int num, orignal, digit, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d ", &num);
    
    orignal = num;
    while (num > 0){
        digit = num % 10;
        fact = 1;

        for(i = 1; i <= digit; i++){
            fact *= i;

        }
        sum += fact;
        num /= 10;

    }

    if (sum == orignal)
    printf("Strong number: ");
    else 
    printf("Not a strong number ");

    return 0;
}