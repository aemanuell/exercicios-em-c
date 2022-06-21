#include <stdio.h>

int main()
{
	int numero_empregado, horas_trabalhadas;
	float salario_hora;

	scanf("%d %d %f", &numero_empregado, &horas_trabalhadas, &salario_hora);
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero_empregado, horas_trabalhadas*salario_hora);
	

return 0;
}