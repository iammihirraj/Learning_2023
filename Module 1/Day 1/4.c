/*
4. Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.
*/

#include <stdio.h>
int main() {
    float operand1, operand2;
    char operator;

    printf("Enter Operand 1: ");
    scanf("%f", &operand1);
    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter Operand 2: ");
    scanf("%f", &operand2);

    float result;
    if (operator == '+') {
        result = operand1 + operand2;
    } else if (operator == '-') {
        result = operand1 - operand2;
    } else if (operator == '*') {
        result = operand1 * operand2;
    } else if (operator == '/') {
        if (operand2 != 0) {
            result = operand1 / operand2;
        } else {
            printf("Error: Division by 0\n");
            return 1;
        }
    } else {
        printf("Error: Non_valid operator\n");
        return 1;
    }
    printf("Result: %.2f\n", result);
    return 0;
}