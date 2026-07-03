#include <stdio.h>
int main()
{
    int age, marks;

    printf("Enter age and marks: ");
    scanf("%d %d", &age, &marks);

    if(age >= 18 && marks >= 60)
    printf("Eligible for admission\n");
    else 
    printf("Not eligible");

    return 0;
}