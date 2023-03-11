#include <stdio.h>
#include <string.h>

int main()
{
  char str1[] = "Toby";
  char str2[] = "toby";

  // strlwr(str1);           // Converts a string to lowercase
  // strupr(str1);           // Converts a string to uppercase
  // strcat(str1, str2);     // Appends str2 to the end of str1
  // strncat(str1, str2, 1); // Appends n characters from str2 to str1
  // strcpy(str1, str2);     // Copy str2 to str1
  // strset(str1, '?');      // Sets all characters of a string to a given character
  // strnset(str1, 'x', 1);  // Sets the first n characters of a string to a given character
  // strrev(str1); // Reverses a string

  // int result = strlen(str1); // Returns string length as int
  // int result = strcmp(str1, str2); // String compare all characters
  // int result = strncmp(str1, str2, 1); // String compare n characters
  // int result = strcmpi(str1, str2); // String compare all (ignore case)
  int result = strnicmp(str1, str2, 1); // String compare n characters (ignore case)

  printf("%s\n", str1);
  printf("%d\n", result);
  !result ? puts("These strings are the same") : puts("These strings are not the same");

  return 0;
}