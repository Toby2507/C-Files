#include <stdio.h>
#include <string.h>

int main()
{
  char name[25];
  int age;

  printf("\nWhat's your name? ");
  fgets(name, 25, stdin);
  name[strlen(name) - 1] = '\0';

  printf("\nHow old are you? ");
  scanf("%d", &age);

  printf("\nYour name is %s and you're %d years old", name, age);
  return 0;
}