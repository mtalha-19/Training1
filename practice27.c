#include <stdio.h>
int main(void)
{
    int age;
    float gpa;
    char grade;
    char name[30] = "Malik king";
    
    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Enter the gpa: ");
    scanf("%f", &gpa);

    printf("Enter the grade: ");
    scanf(" %c", &grade);

    printf("Enter the name: ");
    scanf("%s", &name);

    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}