#include <stdio.h>
int main ()
{
    int N,P,c; //n = numero de participantes, p = posição do ingresso, c = numero da tentativa.
    printf("Por favor, digite o numero de participantes da festa: ");
    scanf ("%d", &N);

    for (c=1;c<=N;c++)
    {
        printf("Por favor, digite o numero do %do ingresso: ", c);
        scanf ("%d", &P);
        if (P == c)
            {
                printf("O ingresso %d eh o ganhador.", c);
                return 0;
            }
    }
    printf("Ninguem ganhou.");

return 0;
}
