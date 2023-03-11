/*
 * Program to evaluate face values.
 * Released under the Vegas Public License.
 */
#include <stdio.h>
#include <stdlib.h>

int larger(int a, int b)
{
  if (a > b)
    return a;
  return b;
}

int main()
{
  char card_name[3];
  int count = 0;
  while (card_name[0] != 'X')
  {
    printf("Enter the card name: ");
    scanf("%2s", card_name);
    int val = 0;
    switch (card_name[0])
    {
    case 'K':
    case 'Q':
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    case 'X':
      continue;
    default:
      val = atoi(card_name);
      if (val > 10)
      {
        puts("This is an invalid card");
        continue;
      }
    }
    if (val >= 3 && val <= 6)
      count++;
    else if (val == 10)
      count--;
    printf("Current count is: %i\n", count);
  }

  return 0;
}