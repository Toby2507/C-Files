#include <stdio.h>

void birthday(char name[], short age)
{
  printf("\nHappy birthday dear %s!", name);
  printf("\nYou are %d years old", age);
};

double square(double x)
{
  return x * x;
};

void hello(char[], int); // Function prototype

int main()
{
  char name[] = "Toby";
  int age = 22;
  double x = square(3.14);
  printf("X square is: %lf", x);

  hello(name, age);
  return 0;
}

void hello(char name[], int age)
{
  printf("\nHello %s", name);
  printf("\nYou're %d years old", age);
}