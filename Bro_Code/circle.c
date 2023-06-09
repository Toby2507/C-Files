#include <stdio.h>
#include <math.h>

int main()
{
  const double PI = 3.14159;
  double radius;
  double circumference;
  double area;

  printf("\nEnter radius of circle: ");
  scanf("%lf", &radius);

  circumference = 2 * PI * radius;
  area = PI * pow(radius, 2);
  printf("\nCircumference: %lf\nArea: %lf", circumference, area);

  return 0;
}