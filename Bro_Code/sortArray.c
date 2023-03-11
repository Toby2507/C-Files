#include <stdio.h>

void sort(char arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        char temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void insertionSort(char arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    int temp = arr[i];
    int j = i - 1;
    for (j; arr[j] > temp && j >= 0; j--)
    {
      arr[j + 1] = arr[j];
    }
    arr[j + 1] = temp;
  }
}

int main()
{
  // int array[] = {6, 4, 2, 1, 7, 3, 8, 9, 5, 0};
  char array[] = {'c', 'a', 'j', 'e', 'i', 'b', 'd', 'f', 'h', 'g'};
  int length = sizeof(array) / sizeof(array[0]);

  insertionSort(array, length);
  for (int i = 0; i < length; i++)
  {
    printf("%c ", array[i]);
  }
  return 0;
}