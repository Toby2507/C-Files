#include <stdio.h>
#include <stdbool.h>

int main()
{
  int x;       // Declaration
  x = 10;      // Initialization
  int y = 321; // Declaration and initialization together
  int age = 22;
  float gpa = 4.8;
  char grade = 'A';
  char name[] = "Bro";
  bool f = true;
  printf("Hello %s\n", name);
  printf("You are %d years old\n", age);
  printf("Your average grade is %c\n", grade);
  printf("Your GPA is %f\n", gpa);
  printf("%d", f);
  return 0;
}