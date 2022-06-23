#include <stdio.h>
int main (){
		int x,y, soma = 0;
		scanf("%d %d", &x, &y);
		if (y > x){
			while (y > x){
				x++;
				if (((x%2 == 1) && (y != x)) || ((x%2 == -1) && (x!=y))){
					soma = soma + x;
				}
			}
		}else if (x > y){
			while (x > y){
				y++;
				if (((y%2 == 1) && (x != y)) || ((y%2 == -1) && (x!=y))){
					soma = soma + y;
				}
			}
		}
		printf("%d\n", soma);
	return 0;
}