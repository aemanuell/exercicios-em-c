#include <stdio.h>

int main (){
	int tipo, alcool = 0, gasolina = 0 , diesel = 0;
	do {
		scanf("%d", &tipo);
		if (tipo == 1){
			alcool += 1;
			continue;
		}
		if (tipo == 2){
		 	gasolina += 1;
		 	continue;
		}
		if (tipo == 3){
			diesel += 1;
			continue;
		}
		if (tipo == 4){
		 	break;
		}
	}while(tipo != 4);

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
	return 0;
}