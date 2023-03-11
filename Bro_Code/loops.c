#include <stdio.h>
#include <string.h>

int main()
{
  // for loop = Repeats a section of code a limited amount of times

  for (int idx = 10; idx > 0; idx--)
  {
    printf("%d\n", idx);
  };

  // while loop = Repeats a section of code while some conditions remains true
  // It might not execute at all

  char name[25];

  puts("\nWhat's your name?: ");
  fgets(name, 25, stdin);
  name[strlen(name) - 1] = '\0';

  while (!strlen(name))
  {
    puts("\nYou did not enter your name");
    puts("What's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
  }

  // printf("\nHello %s", name);

  // while loop = Checks a condition, THEN executes a block of code if condition is true
  // do while loop = always executes a block of code once, THEN checks a condition

  int number = 0;
  int sum = 0;

  do
  {
    puts("Enter a number above 0: ");
    scanf("%d", &number);
    number > 0 && (sum += number);
  } while (number > 0);

  printf("The final sum is: %d", sum);

  // Nested loop = a loop inside of another loop

  int rows;
  int cols;
  char symbol;

  printf("\nEnter number of rows: ");
  scanf("%d", &rows);

  printf("Enter number of columns: ");
  scanf("%d", &cols);

  scanf("%c");

  printf("Enter symbol to use: ");
  scanf("%c", &symbol);

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%c", symbol);
    }
    printf("\n");
  }

  return 0;
}
