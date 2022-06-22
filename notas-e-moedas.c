#include <stdio.h>
#include <stdlib.h>

int main()
{

    double n;
    int p,g1,g2,h1,h2,i1,i2,j1,j2,k1,k2,l1,l2,a1,b1,a2,b2,c1,c2,d1,d2,e1,e2,f1,f2;
    scanf("%lf", &n);
    p = n*100;
    a1 = p%10000;   a2 = p/10000;
    b1 = a1%5000;   b2 = a1/5000;
    c1 = b1%2000;   c2 = b1/2000;
    d1 = c1%1000;   d2 = c1/1000;
    e1 = d1%500;    e2 = d1/500;
    f1 = e1%200;    f2 = e1/200;
    g1 = f1%100;    g2 = f1/100;
    h1 = g1%50;     h2 = g1/50;
    i1 = h1%25;     i2 = h1/25;
    j1 = i1%10;     j2 = i1/10;
    k1 = j1%5;      k2 = j1/5;
    l1 = k1%1;      l2 = k1/1;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", a2,b2,c2,d2,e2,f2);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",g2,h2, i2,j2,k2,l2);
    return 0;
}