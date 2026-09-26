#include <stdio.h>
#include <stdlib.h>

void displayMenu() {
    printf("===========================================\n");
    printf("           BASIC C CALCULATOR              \n");
    printf("===========================================\n");
    printf("Select an operation:\n");
    printf("  +  : Addition\n");
    printf("  -  : Subtraction\n");
    printf("  *  : Multiplication\n");
    printf("  /  : Division\n");
    printf("===========================================\n");
}

int main() {
    char operator;
    double num1, num2, result;

    displayMenu();

    printf("Enter operator (+, -, *, /): ");
    if (scanf(" %c", &operator) != 1) {
        printf("[ERROR] Invalid input.\n");
        return 1;
    }

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("[ERROR] Invalid number input.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("[ERROR] Invalid number input.\n");
        return 1;
    }

    printf("\n-------------------------------------------\n");

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("[ERROR] Division by zero is undefined!\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;

        default:
            printf("[ERROR] Invalid operator '%c'. Please use +, -, *, or /.\n", operator);
            break;
    }

    printf("===========================================\n");

    return 0;
}
