#include <stdio.h>
int main(){
	int n[10], i, val, dobro = 0;
	scanf("%d", &val);
	i = 0;
	while(i<10){
		if(i == 0){
			dobro = val;
			printf("N[%d] = %d\n", i, dobro);
		}
		if (i > 0){
			n[i] = 2*dobro;
			printf("N[%d] = %d\n", i, n[i]);
			dobro = n[i];
		}
		i++;
	}

	return 0;
}