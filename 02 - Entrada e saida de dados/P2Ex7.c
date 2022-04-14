#include <stdio.h>

int main () {

    int n,d; // n = número, d = digito.

    printf("Escreva qualquer inteiro e lhe retornarei o ultimo digito:\n");
    scanf("%d", &n);

    d = n%10;

    printf("O ultimo digito do seu numero eh: %d.", d);

return 0;}
