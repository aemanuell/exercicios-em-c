#include <stdio.h>

int main()
{
  char nome [100];
  double a, b, total;
  scanf("%s\n", nome);
  scanf("%lf %lf", &a, &b);
  total = b * 0.15;
  printf("TOTAL = R$ %.2lf\n", a + total);

return 0;
}