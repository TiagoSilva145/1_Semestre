#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 3
#define C 3
#define Q 3

int main ()
{
    int M[Q][Q], i, j, referencia = 0, soma;

    for(i=0; i<Q; i++)
    {
        for(j=0; j<Q; j++)
            scanf("%d", &M[i][j]);
    }

    for(i=0; i<Q; i++)
    {
        referencia += M[0][i];
    }

    for(i=1; i<Q; i++) //soma linhas
    {
        soma = 0;

        for(j=0; j<Q; j++)
            soma += M[i][j];

        if(soma != referencia)
        {
            printf("A matriz nao eh um quadrado magico.");
            return 0;
        }
    }

    for(j=0; j<Q; j++) //soma colunas
    {
        soma = 0;

        for(i=0; i<Q; i++)
            soma += M[i][j];

        if(soma != referencia)
        {
            printf("A matriz nao eh um quadrado magico.");
            return 0;
        }
    }

    soma = 0;

    for(i=0; i<Q; i++) //soma diagonal principal
        soma += M[i][i];

    if(soma != referencia)
        {
            printf("A matriz nao eh um quadrado magico.");
            return 0;
        }

    soma = 0;

    for(j=0; j<Q; j++) //soma diagonal secundaria
        for(i=0; i<Q; i++)
            if (i+j == Q-1)
                soma += M[i][j];

    if(soma != referencia)
        {
            printf("A matriz nao eh um quadrado magico.");
            return 0;
        }


    printf("A matriz eh um quadrado magico, todas as somas sao iguais a %d.", soma);













}
