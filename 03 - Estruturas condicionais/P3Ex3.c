#include <math.h>
#include <stdio.h>

int main ()
{
    float x,y;

    printf("Por favor, digite os valores para x e para y da sua coordenada cartesiana, separando-os por enter:\n");
    scanf ("%f%f", &x,&y);

     if (x > 0 && y > 0)
    {
        printf("Seu ponto se encontra no primeiro quadrante");
    }
else if (x > 0 && y < 0)
    {
        printf("Seu ponto se encontra no quarto quadrante");
    }
else if (x < 0 && y > 0)
    {
        printf("Seu ponto se encontra no segundo quadrante");
    }
else if (x < 0 && y < 0)
    {
        printf("Seu ponto se encontra no terceiro quadrante");
    }
else if (x == 0 && y != 0)
    {
        printf("Seu ponto se encontra no eixo y");
    }
else if (y == 0 && x != 0)
    {
        printf("Seu ponto se encontra no eixo x");
    }
else
    {
        printf("Seu ponto se encontra na origem");
    }


return 0;
}
