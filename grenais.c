#include <stdio.h>

int main(){
	int i = 0, gremio, inter, vit_int = 0, vit_gre = 0, emp = 0, grenal;
	do {
		i += 1;
		scanf("%d %d", &inter, &gremio);
		if (inter > gremio){
			vit_int += 1;
		}
		if (gremio > inter){
			vit_gre += 1;
		}
		if (gremio == inter){
			emp += 1;
		}
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d", &grenal);
			if (grenal == 2){
				break;
			}
	} while (grenal == 1);
	printf("%d grenais\n", i);
	printf("Inter:%d\n", vit_int);
	printf("Gremio:%d\n", vit_gre);
	printf("Empates:%d\n", emp);
	if (vit_gre > vit_int){
		printf("Gremio venceu mais\n");
	}
	if (vit_gre < vit_int){
		printf("Inter venceu mais\n");
	}
	if ( vit_int == vit_gre){
		printf("Nao houve vencedor\n");
	}

	return 0;
}