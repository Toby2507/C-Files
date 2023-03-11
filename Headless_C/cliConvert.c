/*
 * Program to read comma-separated data from the command line and then
 * display it in JSON format.
 */
#include <stdio.h>
#include <stdbool.h>

int main()
{
  float lat, lon;
  char info[80];
  bool started = false;

  puts("data = [");
  while (scanf("%f, %f, %79[^\n]", &lat, &lon, info) == 3)
  {
    if ((lat < -90 || lat > 90) || (lon < -180 || lon > 180))
    {
      if (lat < -90 || lat > 90)
        fprintf(stderr, "Invalid latitude: %f\n", lat);
      if (lon < -180 || lon > 180)
        fprintf(stderr, "Invalid longitude: %f\n", lon);
      puts("\n]");
      return 2;
    }
    if (started)
      puts(",");
    else
      started = true;
    printf("{latitude: %f, longitude: %f, info: '%s'}", lat, lon, info);
  }
  puts("\n]");

  return 0;
}