#include <stdio.h>
int main(void)
{
    int n;
    unsigned long long fact = 1;

    printf("Enter a positive integer:\n");
    scanf("%d", &n);

    if(n < 0){
        printf("Error! factorial of a negaive number does not exist.");

    } else {
        for(int i = n;i >= 1 ; i--) {
            fact = fact * i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }
    return 0;
}