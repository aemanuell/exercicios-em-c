#include <stdio.h>
  int main(){
  	int j,n;
    scanf("%d", &n);
    j = 1;
    while (j <= 10){
      printf("%d x %d = %d\n", j, n, j*n);
      j++;
    }
  return 0;
  }