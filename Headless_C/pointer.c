/*
 * Program to help me understand pointers and memory in C
 */
#include <stdio.h>

int y = 2;

void goSouthEast(int *lat, int *lon)
{
  *lat = *lat - 1;
  *lon = *lon + 1;
}

int main()
{
  int x = 4, age, prices[] = {2, 3, 4, 5, 6};
  char quote[] = "Your days will be long and joy filled!";
  char name[40], firstName[20], lastName[20];
  char maskedRaider[] = "Alive";
  char *jimmy = maskedRaider;

  maskedRaider[0] = 'D';
  maskedRaider[1] = 'e';
  maskedRaider[2] = 'a';
  maskedRaider[3] = 'd';
  maskedRaider[4] = '!';

  printf("Masked Raider is %s, Jimmy is %s\n", maskedRaider, jimmy);

  printf("Enter your name: ");
  scanf("%39s", name);

  printf("Enter your age: ");
  scanf("%i", &age);

  printf("Enter first and last name: ");
  scanf("%19s %19s", firstName, lastName);

  printf("Hi %s, your full name is %s %s and you're %i years old\n", name, firstName, lastName, age);

  printf("X is stored at %p\n", &x);
  printf("Y is stored at %p\n", &y);

  int latitude = 32, longitude = -64;
  goSouthEast(&latitude, &longitude);
  printf("The array length is %i", sizeof(prices));
  printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
  printf("The quote string is stored at: %p\n", quote);
  puts(quote + 7);

  return 0;
}