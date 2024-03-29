#include <stdio.h>

int main() {
    char operation;
    float num1, num2, result;

    printf("Simple Calculator\n");
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter operation number: ");
    scanf(" %c", &operation);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(operation) {
        case '1':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '2':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '3':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '4':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operation\n");
    }

    return 0;
}
