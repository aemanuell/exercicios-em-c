#include <stdio.h>

int main (){
	int i;
	double nota, media = 0;
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
	return 0;
}