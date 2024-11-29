#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    char operator;
    float a ,b ,result;

    printf("\tSimple Calculator\n\n");

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("Choose an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = a + b;
            printf("%.0f + %.0f = %.0f\n", a, b, result);
            break;
        case '-':
            result = a - b;
            printf("%.0f - %.0f = %.0f\n", a, b, result);
            break;
        case '*':
            result = a * b;
            printf("%.0f * %.0f = %.0f\n", a, b, result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("%.0f / %.0f = %.2f\n", a, b, result);
            } 
            else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");
    }

    return 0;
}
