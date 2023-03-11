#include <stdio.h>
#include <math.h>

int main()
{
  double hyp;
  double opp;
  double adj;

  printf("\nEnter opposite side: ");
  scanf("%lf", &opp);
  printf("\nEnter adjacent side: ");
  scanf("%lf", &adj);

  hyp = sqrt(pow(opp, 2) + pow(adj, 2));
  printf("\nHypothenus: %lf", hyp);
  return 0;
}