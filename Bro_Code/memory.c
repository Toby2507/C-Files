#include <stdio.h>

int main()
{
  // memory = an array of bytes within RAM (street)
  // memory block = a single unit (byte) within memory, used to hold some value (person)
  // memmory address = the address of where a memory block is located (house address)

  char a = 'X';
  char b[10];

  printf("%d bytes\n", sizeof(a));
  printf("%d bytes\n", sizeof(b));

  printf("%p\n", &a);
  printf("%p\n", &b);
  return 0;
}