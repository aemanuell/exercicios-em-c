#include <stdio.h>

int main (){
	int n,i;
	scanf("%d", &n);
	if(n%2 == 0){
		n = n-1;
		for (i = 2; i <= 12; i+=2){
			printf("%d\n", n+i);
		}
	}else{
		for (i = 0; i <= 10; i+=2){
			printf("%d\n", n+i);
		}
	}
	return 0;
}