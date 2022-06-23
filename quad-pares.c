#include <stdio.h>


int main (){
	int n, i;
	scanf("%d", &n);
	i = 0;
	while(i < n){
		i = i+2;
		printf("%d^2 = %d\n",i, i*i);
	}

	return 0;
}