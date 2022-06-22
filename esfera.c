#include <stdio.h>

int main()
{
	double raio, p;
	p = (4/3.0) * 3.14159;
	
	scanf("%lf", &raio);
	printf("VOLUME = %.3lf\n", p * (raio*raio*raio));
return 0;
}