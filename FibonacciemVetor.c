#include <stdio.h>
int main(){
	int n, j, i;
	long long int aux1, aux2, fibonacci;
	scanf("%d", &n);
	int F[n];

	for (i = 0; i < n; i++){
		scanf("%d", &F[i]);
	}
	for (i = 0; i < n; i++){
		if (F[i] == 0){
			F[0] = 0;
			printf("Fib(0) = %d\n", F[0]);
		}
		if (F[i] == 1){
			F[1] = 1;
			printf("Fib(1) = %d\n", F[1]);
		}
		if (F[i] == 2){
			F[2] = 1;
			printf("Fib(2) = %d\n",F[2]);
		}
		if (F[i] > 2){
			aux1 = 1;
			aux2 = 1;
			for (j = 3; j <= F[i]; j++){
				fibonacci = aux1 + aux2;
				aux1 = aux2;
				aux2 = fibonacci;
			}
			printf("Fib(%d) = %lld\n", j-1, fibonacci);
		}

	}

	return 0;
}