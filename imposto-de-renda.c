#include<stdio.h>
int main()
{
    double salario;
    scanf("%lf",&salario);
    if((salario>=0)&&(salario<=2000))
    {
        printf("Isento\n");
    }
    else
    {
        if((salario>=2000.01)&&(salario<=3000))
        {
            salario=((salario - 2000)*0.08);
            printf("R$ %.2lf\n",salario);
        }
        else
        {
            if((salario>=3000.01)&&(salario<=4500))
            {
                salario=((salario-3000)*0.18)+80;
                printf("R$ %.2lf\n",salario);
            }
            if(salario>4500)
            {
                salario=(((salario-4500)*0.28)+350);
                printf("R$ %.2lf\n",salario);
            }
        }
    }
    return(0);
}