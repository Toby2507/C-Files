#include <stdio.h>
#include <ctype.h>

int main()
{
  char unit;
  float temp;

  puts("\nIs the temperature in (F) or (C)?: ");
  scanf("%c", &unit);
  unit = toupper(unit);

  if (unit == 'C')
  {
    puts("\nEnter the temperature in Celsius: ");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("\nThe temperature is %.1f Fahrenheit", temp);
  }
  else if (unit == 'F')
  {
    puts("\nEnter the temperature in Fahrenheit: ");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("\nThe temperature is %.1f Celsius", temp);
  }
  else
  {
    printf("\n %c is not a valid unit of measurement", unit);
  }
  return 0;
};