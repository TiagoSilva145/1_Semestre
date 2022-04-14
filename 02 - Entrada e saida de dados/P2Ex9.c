#include <stdio.h>

int main () {

    int   ped;
    float dist,gast;

    printf("Por favor, digite a distancia em km e a quantidade de pedagios entre as cidades:\n");
    scanf ("%f\n%d", &dist,&ped);

    gast = (dist/15)*2.6+ped*8;

    printf("O gasto da viagem eh de: R$%.2f", gast);

return 0;}
