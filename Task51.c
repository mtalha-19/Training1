#include <stdio.h>
int main()
{
    char name[50];
    int age;

    printf("Enter your name:\n");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age:\n");
    scanf("%d", &age);

    printf("Hello %s You are %d years old.\n", name, age);
    return 0;
}