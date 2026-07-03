#include <stdio.h>
int main()
{
    int total = 0;
    int counter = 1;

    while (counter <= 10){
        printf("%s", "Enter grade: ");
        int grade = 0;
        scanf("%d", &grade);
        total = total + grade;
        counter = counter + 1;

    }
    int average = total/10;
    printf("Class average is %d\n", average);

    return 0;
}