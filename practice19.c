#include <stdio.h>
int main(void)
{
    float num1, num2, result;
    char op;
    // get the user to input two numbers
    printf("Enter the number: ");
    scanf("%f", &num1);
    printf("Enter the operator: (+, -, *, /): "); //Enter the required operator
    scanf(" %c", &op);

    printf("Enter the number ");
    scanf("%f", &num2);

    switch (op) {
        case '+':
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
        break;
        case'-':
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f", num1, num2, result);
        break;
        case'*':
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f", num1, num2, result);
        break;
        case '/':
        if (num2 != 0){
        result = num1 / num2;
        printf("%.2f / %.2f = %.2f", num1, num2, result);
    } else {
        printf("Error: Division by zero is not possible.\n");
    }
    break;
    default:
        printf("Invalid operator, Please enter +,-,*, or /.\n");
}
return 0;
}