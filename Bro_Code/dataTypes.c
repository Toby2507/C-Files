#include <stdio.h>
#include <stdbool.h>

int main()
{
  char a = 'C';                                    // Single character  %c
  char b[] = "Bro";                                // Array of characters  %s
  float c = 3.141592;                              // 4 bytes (32 bits of precision) 6 - 7 digits %f
  double d = 3.141592653589793;                    // 8 bytes (64 bits of precision) 15 - 16 digits %lf
  bool e = true;                                   // 1 byte (true or false) %d
  char f = 120;                                    // 1 byte (-128 to +127) %d or %c
  unsigned char g = 255;                           // 1 byte (0 to +255) %d or %c
  short int h = 32767;                             // 2 bytes (-32768 to +32767) %d
  unsigned short i = 65535;                        // 2 bytes (0 to +65535) %d
  int j = 2147483647;                              // 4 bytes (-2,147,483,648 to + 2,147,483,647) %d
  unsigned int k = 4294967295;                     // 4 bytes (0 to +4,294,967,295) %u
  long long int l = 927384723847923497;            // 8 bytes (-9 quintillion to +9 quintillion) %lld
  unsigned long long int m = 1844789234879287778U; // 8 bytes (0 to +18 quintillion) %llu
  printf("%c\n", a);
  printf("%s\n", b);
  printf("%f\n", c);
  printf("%0.15lf\n", d);
  printf("%d\n", e);
  printf("%d\n", f);
  printf("%c\n", g);
  printf("%d\n", h);
  printf("%d\n", i);
  printf("%d\n", j);
  printf("%u\n", k);
  printf("%lld\n", l);
  printf("%llu\n", m);
  return 0;
}