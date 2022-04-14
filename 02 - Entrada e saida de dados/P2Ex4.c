#include <stdio.h>

int main () {

    int   dist;
    float gast, cons;

    printf("Por favor, coloque a distancia percorrida, em km, como um inteiro:\n");
    scanf ("%d", &dist);
    printf("Agora coloque o total de combustivel gasto, em litros, como um real:\n");
    scanf ("%f", &gast);

    cons = dist/gast;

    printf("O consumo medio do automovel foi de %.3f km/l", cons);


return 0;}
