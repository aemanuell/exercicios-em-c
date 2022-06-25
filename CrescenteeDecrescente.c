#include <stdio.h>
void ordenacao(int a, int b){
	if(a>b){
		printf("Decrescente\n");
	}
	if(b>a){
		printf("Crescente\n");
	}
}

int main (){
	int x, y;
	do {
		scanf("%d %d",&x, &y);
		ordenacao(x,y);

	}while(x!=y);
	
	return 0;
}