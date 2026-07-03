#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;
    int run_once = 1; // Control variable to ensure the do-while runs only once

    // The do-while loop structure ensures the code block runs at least once
    do {
        // 1. Get user input for two numbers and an operator
        printf("--- Simple Calculator ---\n");
        printf("Enter first number: ");
        if (scanf("%f", &num1) != 1) break; // Basic input validation
        
        printf("Enter operator (+, -, *, /): ");
        if (scanf(" %c", &op) != 1) break; // Note the space before %c
        
        printf("Enter second number: ");
        if (scanf("%f", &num2) != 1) break; // Basic input validation

        // 2. Use a switch statement (alternative to if-else)
        switch (op) {
            case '+':
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
                
            case '-':
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
                
            case '*':
                result = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;
                
            case '/':
                // Using the ternary operator (?:) as an alternative to if-else for the zero check
                (num2 != 0) ? 
                    (result = num1 / num2, printf("%.2f / %.2f = %.2f\n", num1, num2, result)) 
                : 
                    printf("Error: Division by zero is not allowed.\n");
                break;
                
            default:
                printf("Invalid operator. Please enter +, -, *, or /.\n");
        }

        // Set the condition to stop the loop after one execution
        run_once = 0; 

    } while (run_once); // Loop condition is now false

    printf("\nProgram finished.\n");
    return 0;
}