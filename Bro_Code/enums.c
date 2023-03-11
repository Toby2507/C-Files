#include <stdio.h>

typedef enum
{
  Sun = 1,
  Mon,
  Tue,
  Wed,
  Thu,
  Fri,
  Sat
} Day;

int main()
{
  // enum = a user defined type of named integer identifiers
  //        helps to make a program more readable
  //        they are not strings, but they can be treated as integers

  Day today = Sun;

  if (today == Sun || today == Sat)
  {
    printf("It's the weekend! YAY!!!");
  }
  else
  {
    printf("I have to work today! :(");
  }

  return 0;
}