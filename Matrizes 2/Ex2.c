#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 5
#define C 5
#define Q 3

void preenche_matriz_aleatoria (int M[][C], int l, int c)
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            M[i][j] = rand() % 10;
    return;
}

void imprime_matriz (int M[][C], int l, int c)
{
    int i,j;

    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
            printf("%3d ", M[i][j]);
        printf("\n");
    }
    return;
}

int soma_acima (int M[][C], int l, int c)
{
    int i, j, soma=0;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            if(j>i)
                soma += M[i][j];

    return soma;
}

int soma_abaixo (int M[][C], int l, int c)
{
    int i, j, soma=0;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            if(j<i)
                soma += M[i][j];

    return soma;
}

int soma_principal (int M[][C], int l, int c)
{
    int i, j, soma=0;

    for(i=0; i<l; i++)
            soma += M[i][i];

    return soma;
}

int soma_secundaria (int M[][C], int l, int c)
{
    int i, j, soma=0;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            if(j+i == l-1)
                soma += M[i][j];

    return soma;
}

int main ()
{
    int M[Q][Q], i, j;

    srand(time(NULL));

    preenche_matriz_aleatoria(M,Q,Q);
    imprime_matriz(M,Q,Q);

    printf("A soma dos elementos acima da diagonal principal eh %d.\n", soma_acima(M,Q,Q));
    printf("A soma dos elementos abaixo da diagonal principal eh %d.\n", soma_abaixo(M,Q,Q));
    printf("A soma dos elementos da diagonal principal eh %d.\n", soma_principal(M,Q,Q));
    printf("A soma dos elementos da diagonal secundaria eh %d.\n", soma_secundaria(M,Q,Q));

    return 0;
}
