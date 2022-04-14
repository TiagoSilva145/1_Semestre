#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 5
#define C 10
#define Q 3

void preenche_matriz_aleatoria (int M[][C], int l, int c)
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            M[i][j] = (rand() % 4) + 65;
    return;
}

void imprime_matriz (int M[][C], int l, int c)
{
    int i,j;

    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
            printf("%c ", M[i][j]);
        printf("\n");
    }
}

void imprime_vetor (int M[][C], int l, int c)
{
    int i,j;

    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
            printf("%3d ", M[i][j]);
        printf("\n");
    }
}

void zera_matriz (int M[][C], int l, int c)
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            M[i][j] = 0;
}

int main ()
{
    int gabarito[C], respostas[L][C], resultado[L], i, j;

    zera_matriz(resultado,1,L);

    printf("\nGabarito :\n");
    preenche_matriz_aleatoria(gabarito, 1, C);
    imprime_matriz(gabarito, 1, C);

    preenche_matriz_aleatoria(respostas,L,C);
    printf("\nRespostas :\n");
    imprime_matriz(respostas,L,C);

    for(i=0; i<L; i++)
        for(j=0; j<C; j++)
            if(respostas[i][j] == gabarito[j])
                (resultado[i])++;

    printf("\nResultados:\n");
    imprime_vetor(resultado, 1, L);




















}
