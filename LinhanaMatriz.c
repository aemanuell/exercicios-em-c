#include <stdio.h>
int main(){
	int n, i, j;
	float m[12][12], soma = 0;
	char c;
	scanf("%d", &n);
	scanf(" %c", &c);

	for(i = 0; i <= 11; i++){
		for (j = 0; j <= 11; j++){
			scanf("%f", &m[i][j]);
			if(i == n){
				if (c == 'S'){
					soma = soma + m[i][j];
				}else if(c == 'M'){
					soma = soma + m[i][j];
				}
			}
		}
	}
	if (c == 'S'){
		printf("%.1f\n", soma);
	}
	if (c == 'M'){
		printf("%.1f\n", soma/12.0);
	}

	return 0;
}