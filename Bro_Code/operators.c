#include <stdio.h>

int main()
{
  const int x = 5;
  int y = 2;
  int z = x % y;
  z += 2;
  printf("%d", z);
  return 0;
}