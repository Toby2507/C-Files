#include <stdio.h>

void printAge(int *pAge)
{
  printf("You are %d years old", *pAge);
}

int main()
{
  // pointer = a "variable-like" reference that holds a memory address to another variable, array, e.t.
  //           some tasks are performed more easily with pointers
  //           * = indirection operator (value at address)

  int age = 21;
  int *pAge = &age; // For just declaring the pointer, it's good practice to assing NULL

  printf("address of age: %p\n", &age);
  printf("value of pAage: %p\n", pAge);

  printf("value of age: %d\n", age);
  printf("value at stored address: %d\n", *pAge); // Derefrencing

  printf("size of age: %d bytes\n", sizeof(age));
  printf("size of age pointer: %d bytes\n", sizeof(pAge));
  printAge(pAge);

  return 0;
}