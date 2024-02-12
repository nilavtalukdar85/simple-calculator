#include <stdio.h>
#include <stdlib.h>
void addition(double num1, double num2)
{
    double result = num1 + num2;
    printf("\n%.2lf + %.2lf = %.2lf", num1, num2, result);
}
void subtraction(double num1, double num2)
{
    double result = num1 - num2;
    printf("\n%.2lf - %.2lf = %.2lf", num1, num2, result);
}
void multiplication(double num1, double num2)
{
    double result = num1 * num2;
    printf("\n%.2lf x %.2lf = %.2lf", num1, num2, result);
}
void division(double num1, double num2)
{
    if (num2 == 0)
    {
        printf("\nA number cannot be divided by 0");
    }
    else
    {
        double result = num1 / num2;
        printf("\n%.2lf / %.2lf = %.2lf", num1, num2, result);
    }
}

int main()
{
    printf("Basic calculator");

    char operator;
    printf("\nEnter an operator (+, -, x, /) ");
    scanf("%c", &operator);

    if ((operator!= '+') && (operator!= '-') && (operator!= 'x') && (operator!= '/'))
    {
        printf("\nInvalid operator");
        printf("\nExiting the programme now");
        exit(1);
    }

    double num_1, num_2;
    printf("\nEnter 1st number ");
    scanf("%lf", &num_1);

    printf("\nEnter 2nd number ");
    scanf("%lf", &num_2);

    switch (operator)
    {
    case '+':
        addition(num_1, num_2);
        break;
    case '-':
        subtraction(num_1, num_2);
        break;
    case 'x':
        multiplication(num_1, num_2);
        break;
    case '/':
        division(num_1, num_2);
        break;
    default:
        printf("\nInvalid operator");
        break;
    }

    printf("\nGood Bye");
    return 0;
}
