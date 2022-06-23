#include <stdio.h>

int main()
{
	int dia_i, hora_i, min_i, seg_i, dia_f, hora_f, min_f, seg_f,seg_ti, seg_tf, aux1=0, dia,hora,min,seg;
  scanf("%*s %d", &dia_i);
  scanf("%d %*s", &hora_i);
  scanf("%d %*s", &min_i);
  scanf("%d", &seg_i);
  scanf("%*s %d", &dia_f);
  scanf("%d %*s", &hora_f);
  scanf("%d %*s", &min_f);
  scanf("%d", &seg_f);

  seg_ti = hora_i*3600 + min_i*60 + seg_i;
  seg_tf = hora_f*3600 + min_f*60 + seg_f;

  if (seg_tf < seg_ti) {
    dia = dia_f - (dia_i + 1);
    aux1 = (86400 - seg_ti) + seg_tf;
    hora = aux1/3600;
    min = aux1%3600;
    min = min/60;
    seg = aux1%3600%60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, hora, min, seg);
  } else if ((seg_tf - seg_ti) != 0){
      dia = dia_f - dia_i; 
      aux1 = seg_tf - seg_ti;
      hora = aux1/3600;
      min = aux1%3600;
      min = min/60;
      seg = aux1%3600%60; 
      printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, hora, min, seg);
  } if ( seg_i == seg_f) {
    seg = 0;
    if (min_i == min_f){
      min = 0;
        if ( hora_f == hora_i){
          hora = 0;
          dia = 1;
          printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, hora, min, seg);
      }
    }
  }
return 0;
}