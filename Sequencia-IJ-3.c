#include <stdio.h>

int main (){
	int i, j, z=7;
	for (i = 1; i <= 10; i+=2){
		for (j = z; j >= (z-2); j--){
			printf("I=%d J=%d\n",i, j);
		}
		z+=2;
	}
return 0;
}