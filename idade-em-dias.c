#include <stdio.h>

int main()
{
	int num, mes,dia;
	scanf("%d", &num);

	if (num > 365){
		mes = num % 365;
		num = num / 365; 
		if(mes > 30){
			dia = mes % 30;
			mes = mes / 30;
		}
		printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", num, mes,dia);
	}else {
		if (num < 365){
			mes = num % 365;
			num = 0 ;
				if(mes >= 30){
					dia = mes % 30;
					mes = mes / 30;
				}else{
					dia = num;
				}
			printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", num, mes,dia);
		}
	}
return 0;
}