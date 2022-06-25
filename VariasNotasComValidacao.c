#include <stdio.h>

int main (){
	int i, x;
	double nota, media;
	do {
		media = 0;
		for (i = 1; i <=2 ; i++){
			scanf("%lf", &nota);
			if ((nota < 0) || (nota > 10)){
				do{
					printf("nota invalida\n");
					scanf("%lf", &nota);

				}while(nota < 0);
			}
			if ((nota >= 0) && (nota <= 10)){
				media = media + nota; 
			}
		}
		printf("media = %.2lf\n", media/2);
		do {
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &x);
			if (x == 2){
				break;
			}
		}while(x != 1);

	}while(x == 1);
	return 0;
}