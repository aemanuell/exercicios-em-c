#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d", &a, &b);
    if (a == b){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if (b > a){
        printf("O JOGO DUROU %d HORA(S)\n", b-a);
    }

    else if (a > b){
            b=b+24;
        printf("O JOGO DUROU %d HORA(S)\n", b-a);
    }
    return 0;
}