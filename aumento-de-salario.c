#include <stdio.h>
#include <stdlib.h>

int main()
{
  float valor_salario, valor_perc;
  scanf("%f", &valor_salario);

  if ((valor_salario >= 0) && (valor_salario <= 400.00))
  {
    valor_perc = valor_salario * 1.15;
    valor_salario = valor_salario * 0.15;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",valor_perc,valor_salario );
  }

  if ((valor_salario >= 400.01) && (valor_salario <= 800.00))
  {
    valor_perc = valor_salario * 1.12;
    valor_salario = valor_salario * 0.12;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",valor_perc,valor_salario );
  }

  if ((valor_salario >= 800.01) && (valor_salario <= 1200.00))
  {
    valor_perc = valor_salario * 1.10;
    valor_salario = valor_salario * 0.10;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",valor_perc,valor_salario );
  }
  if ((valor_salario >= 1200.01) && (valor_salario <= 2000.00))
  {
    valor_perc = valor_salario * 1.07;
    valor_salario = valor_salario * 0.07;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",valor_perc,valor_salario );
  }
  
  if (valor_salario > 2000)
  {
    valor_perc = valor_salario * 1.04;
    valor_salario = valor_salario * 0.04;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",valor_perc,valor_salario );
  }
    return 0;
}