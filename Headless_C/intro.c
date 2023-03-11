/*
 * Program to get myself familiar with the C language in general
 */
#include <stdio.h>

int main()
{
  //   int decks;
  //   printf("Enter a number of decks: ");
  //   scanf("%i", &decks);
  //   if (decks < 1)
  //   {
  //     puts("That is not a valid number of decks");
  //     return 1;
  //   }
  //   printf("There are %i cards\n", (decks * 52));

  int x = 97;
  int y = sizeof(x++);

  printf("x is %d", x);
  return 0;
}