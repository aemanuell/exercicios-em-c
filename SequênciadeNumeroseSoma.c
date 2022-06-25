#include <stdio.h>
int main (){
	int x, y, soma = 0;
	do
	{
		scanf("%d %d", &x, &y);
		soma = 0;
		if ((x < y) && (x > 0) && (y > 0)){
			do {
				printf("%d ", x);
				soma += x;
				x++;
			} while (x <= y );
		}else if ((x > y) && (x > 0) && (y > 0)){
			do {
				printf("%d ", y);
				soma += y;
				y++;
			}while(y <= x);
		}
		if (soma>0){
			printf("Sum=%d\n", soma);
		}
	}while ((x > 0) && (y > 0));
	
	return 0;
}