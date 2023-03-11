/*
 * Program to get me accustommed to rolling my own data stream
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char line[80];
  FILE *in = fopen("spooky.csv", "r");
  FILE *out1 = NULL;
  FILE *out2 = NULL;
  FILE *out3 = NULL;

  if (in)
  {
    out1 = fopen("ufos.csv", "w");
    out2 = fopen("disappearances.csv", "w");
    out3 = fopen("others.csv", "w");
    while (fscanf(in, "%79[^\n]", line) == 1)
    {
      if (strstr(line, "UFO"))
        fprintf(out1, "%s\n", line);
      else if (strstr(line, "Disappearance"))
        fprintf(out2, "%s\n", line);
      else
        fprintf(out2, "%s\n", line);
    }
  }

  fclose(in);
  fclose(out1);
  fclose(out2);
  fclose(out3);
  return 0;
}