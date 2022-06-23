#include <stdio.h>

int main()
{
	int hora_inicio, min_inicio, hora_fim, min_fim, min_total_final, min_total_inicio, duracao, hora, min;
  scanf("%d %d %d %d", &hora_inicio, &min_inicio, &hora_fim, &min_fim);

  min_total_inicio = (hora_inicio * 60) + min_inicio;
  min_total_final = (hora_fim * 60) + min_fim;

  if (min_total_final < min_total_inicio) {
  	duracao = min_total_final + (1440 - min_total_inicio);
  	hora = duracao/60;
  	min = duracao%60;
  	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);
  } else if ((min_total_inicio - min_total_final) != 0){
	  	duracao = min_total_final - min_total_inicio;
	  	hora = duracao/60;
	  	min = duracao%60;	
	  	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);
  }
  if (min_inicio == min_fim){
    min = 0;
    if (hora_inicio == hora_fim){
      hora = 24;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);
    } 
  }
return 0;
}