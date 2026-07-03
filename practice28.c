#include <stdio.h>
int main(void)
{
    char grade;
    int qualityPoints = 0;

    printf("Enter a letter grade(A,B,C,D, or F): ");
    scanf(" %c", &grade);

    switch(grade)
    {
        case'A':
        case'a':
        qualityPoints = 4;
        printf("Excellent!  You earned 4 wuality points.\n");
        break;

        case'B':
        case'b':
        qualityPoints = 3;
        printf("Good!  You earned 3 quality points.\n");
        break;

        case'C':
        case'c':
        qualityPoints = 2;
        printf("Fair! You earned 2 quality points.\n");
        break;

        case'D':
        case'd':
        qualityPoints = 1;
        printf("Poor!  You earned only 1 quality pooint");
        break;

        case'F':
        case'f':
        qualityPoints = 0;
        printf("Failed!  You earned 0 qua;ity points.\n");
        break;

        default:
        printf("Error:  This is not a valid greade.\n");
    }
}