#include <stdio.h>
#include <math.h>

int main(){
    int n,
        c,d,u; //centena, dezena e unidade

    printf("Por favor, digite um valor para n:\n");
    scanf ("%d", &n);

    c = n/100;
    d = (n%100)/10;
    u = (n%100)%10;

    if (n < 100 || n >999)
        printf("Seu numero nao eh um numero de Angstrom.");
    else if (n == pow(c,3) + pow(d,3) + pow(u,3))
        printf("Seu numero eh um numero de Angstrom.");
    else
        printf("Seu numero nao eh um numero de Angstrom.");


return 0; }

