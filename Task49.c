#include <stdio.h>
#define SIZE 5
int main()
{
    int n[SIZE] = {3, 4, 10, 2, 5};

    printf("Element\tValue\tBar Chart\n");

    for(int i = 0; i < SIZE; ++i){
        printf("%zu\t%d\t", i, n[i]);

        for(int j = 1; j <= n[i]; ++j){
            printf("*");
        }
        printf("\n");
    }
     return 0;
}