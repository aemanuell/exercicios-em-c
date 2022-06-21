#include <stdio.h>

int main()
{
  int c, d;
  double a, b, e, f;
  scanf("%d", &c);
  scanf("%lf %lf", &a, &b);
  scanf("%d", &d);
  scanf("%lf %lf", &e, &f);
  printf("VALOR A PAGAR: R$ %.2lf\n", (a*b) + (e*f));

return 0;
}