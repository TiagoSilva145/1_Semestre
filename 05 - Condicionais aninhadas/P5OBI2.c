#include <math.h>
#include <stdio.h>

int main ()
{
    float A,G,Ra,Rg,Va,Vg;

    printf("Por favor, digite o valor do litro do alcool e do litro da gasolina, sem os R$: ");
    scanf ("%f%f", &A,&G);
    printf("Agora digite o rendimento do litro de alcool e do litro de gasolina (quantos km um litro de combustivel percorre:");
    scanf ("%f%f", &Ra,&Rg);

    Va = A / Ra;
    Vg = G / Rg;

    if (Va >= Vg)
        printf("G");
    else
        printf("A");


return 0;
}

