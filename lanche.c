#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);

	if(x == 1){
		printf("Total: R$ %.2f\n", 4.0 * y);
	}
	if(x == 2){
		printf("Total: R$ %.2f\n", 4.5 * y);
	}
	if(x == 3){
		printf("Total: R$ %.2f\n", 5.0 * y);
	}
	if(x == 4){
		printf("Total: R$ %.2f\n", 2.0 * y);
	}
	if(x == 5){
		printf("Total: R$ %.2f\n", 1.5 * y);
	}
return 0;
}