#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int result;

    // Getting user input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any leftover newline character
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Performing the calculation based on the operator
    if (operator == '+') {
        result = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%d / %d = %d\n", num1, num2, result);
        } else {
            printf("Error! Division by zero is not allowed.\n");
        }
    } else {
        printf("Error! Invalid operator.\n");
    }

    return 0;
}
