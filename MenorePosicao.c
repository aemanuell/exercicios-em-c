#include <stdio.h>
int main(){

	int n, menor = 100000, i, pos;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		int x[n];
		scanf("%d", &x[i]);
		if(x[i] < menor){
			menor = x[i];
			pos = i;
		}
	}
	printf("Menor valor: %d\nPosicao: %d\n", menor, pos);
return 0;
}