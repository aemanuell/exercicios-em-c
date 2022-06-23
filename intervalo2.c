#include <stdio.h>

int main (){
	int num, i,n ,j=0, k=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d", &num);
		if((num >= 10) && (num <= 20)){
			j++;
		}else {
			k++;
		}
	}
	printf("%d in\n%d out\n", j, k);
	return 0;
}