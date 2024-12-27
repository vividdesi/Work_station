#include <stdio.h>

int main()
{
    int a, b;
    char operator;

    // Display options for the user
    printf("Select an operator to perform a calculation:\n");
    printf("Addition (+)\nSubtraction (-)\nMultiplication (*)\nDivision (/)\n");
    printf("Enter your operator: ");
    
    // Input operator with whitespace handling
    scanf(" %c", &operator);

    // Input operands
    printf("Enter two integer values:\n");
    printf("First value: ");
    scanf("%d", &a);
    printf("Second value: ");
    scanf("%d", &b);

    // Perform operation based on the selected operator
    switch (operator)
    {
        case '+':
            printf("Result: %d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("Result: %d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
            {
                printf("Result: %d / %d = %d\n", a, b, a / b);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");
    }

    return 0;
}

