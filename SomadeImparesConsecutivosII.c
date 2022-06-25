#include <stdio.h>
int main (){
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		int x,y, soma = 0;
		scanf("%d %d", &x, &y);
		if (y > x){
			while (y > x){
				y--;
				if ((y%2 == 1) && (y != x)){
					soma = soma + y;
				}
			}
		}else if (x > y){
			while (x > y){
				x--;
				if ((x%2 == 1) && (x != y)){
					soma = soma + x;
				}
			}
		}
		printf("%d\n", soma);
	}
	return 0;
}