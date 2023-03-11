/*
 * Program to filter GPS data and return only data within the bermuda triangle
 */
#include <stdio.h>

int main()
{
  float lat, lon;
  char info[80];

  while (scanf("%f, %f, %79[^\n]", &lat, &lon, info) == 3)
  {
    if ((lat > 26 && lat < 34) && (lon > -76 && lon < -64))
      printf("%f, %f, %s\n", lat, lon, info);
  }

  return 0;
}