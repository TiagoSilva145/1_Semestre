#include <math.h>
#include <stdio.h>

int main ()
{
    int a,b,c,h,l;

    printf("Por favor, digite as dimensoes da caixa e as dimensoes da janela, com todos os valores em centimetro e separando-os valores por enter:\n");
    scanf ("%d%d%d%d%d", &a,&b,&c,&h,&l);

    if (a <= h && b <= l)
    {
        printf("S");
    }
    else if (a <= l && b <= h)
    {
        printf("S");
    }
    else if (b <= h && c <= l)
    {
        printf("S");
    }
    else if (b <= l && c <= h)
    {
        printf("S");
    }
    else if (a <= l && c <= h)
    {
        printf("S");
    }
    else if (a <= h && c <= l)
    {
        printf("S");
    }
    else
    {
        printf("N");
    }


return 0;
}

