#include <stdio.h>

int main (){
	int num, i, maior = 0, pos = 0;
	for (i = 0; i < 100; i++){
		scanf("%d", &num);
		if (num > maior){
			maior = num;
			pos = i+1;
		}
	}
	printf("%d\n%d\n", maior, pos);
	return 0;
}