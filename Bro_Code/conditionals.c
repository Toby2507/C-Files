#include <stdio.h>

int findMax(int x, int y)
{
  return x > y ? x : y;
};

int main()
{
  int age;
  char grade;

  // printf("\nEnter your age: ");
  // scanf("%d", &age);

  printf("\nEnter a letter grade: ");
  scanf("%c", &grade);

  // if (age >= 18)
  //   printf("You are now signed up");
  // else if (age < 0)
  //   printf("You haven't been born yet");
  // else
  //   printf("You are underaged sadly");

  // ternary operator (condition) ? if true : if false
  int max = findMax(3, 4);
  printf("%d\n", max);

  switch (grade)
  {
  case 'A':
    printf("Perfect!\n");
    break;
  case 'B':
    printf("You did good!\n");
    break;
  case 'C':
    printf("You did okay\n");
    break;
  case 'D':
    printf("At least it's not an F\n");
    break;
  case 'F':
    printf("You FAILED!!!\n");
    break;
  default:
    printf("That's not a valid grade\n");
  }

  return 0;
}