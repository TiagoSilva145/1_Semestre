#include <stdio.h>

int main () {

    float C,F;

    printf("Por favor, digite a temperatura em Celsius a ser convertida para Fahrenheit:\n");
    scanf ("%f", &C);

    F = 9*C/5+32;

    printf("A temperatura correspondente a %.2f Celsius eh %.2f Fahrenheit.", C,F);

return 0;}
