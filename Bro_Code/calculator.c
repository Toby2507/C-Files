#include <stdio.h>

int main()
{
  char operator;
  double num1;
  double num2;
  double result;

  puts("\nEnter an operator (+ - * /): ");
  scanf("%c", &operator);
  puts("Enter number 1: ");
  scanf("%lf", &num1);
  puts("Enter number 2: ");
  scanf("%lf", &num2);

  switch (operator)
  {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    result = num1 / num2;
    break;
  default:
    printf("\n%c is not a valid operator", operator);
  }

  printf("The result is: %.2lf", result);

  return 0;
}