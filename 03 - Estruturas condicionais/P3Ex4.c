#include <math.h>
#include <stdio.h>

int main ()
{
    int a,b,c,d;

    printf("Por favor, digite os valores para a,b,c e d, separando-os por enter:\n");
    scanf ("%d%d%d%d", &a,&b,&c,&d);

    if ( b>c && d>a && c+d > a+b && c > 0 && d > 0 && a%2 == 0)
    {
        printf("Valores aceitos");
    }
    else
    {
        printf("Valores nao aceitos");
    }


return 0;
}

