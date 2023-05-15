#include <stdio.h>
void calculate()
{
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter an operator: ");
    scanf(" %c", &op); //space before the %c to avoid errors

    printf("Enter another number number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f\n", num1 + num2);
    } else if (op == '-'){
        printf("%f\n", num1 - num2);
    } else if (op == '/') {
        printf("%f\n", num1 / num2);
    } else if (op == '*') {
        printf("%f\n", num1 * num2);
    } else {
        printf("Invalid operator\n");
    }
}
