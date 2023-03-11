#include <stdio.h>
#include <string.h>

int main()
{
  // Array = a data structure that can store many values of the same data type.

  // double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};
  // sizeof(prices) / sizeof(prices[0]): Length of an array

  // for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
  // {
  //   printf("$%.2lf\n", prices[i]);
  // }

  // 2D Array = an array, where each element is an entire array
  //            useful if you need a matrix, grid, or table of data

  int numbers[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", numbers[i][j]);
    };
    printf("\n");
  };

  char cars[][10] = {"Mustang", "Corvette", "Camaro"};
  strcpy(cars[0], "Tesla");

  for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
  {
    printf("%s\n", cars[i]);
  }

  return 0;
}