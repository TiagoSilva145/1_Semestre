#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 3
#define C 3
#define Q 3

void preenche_matriz (int M[][C], int l, int c)
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            scanf("%d", &M[i][j]);
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

void preenche_vetor (int M[][C], int v[], int l, int c)
{
    int i,j;

    for(j=0; j<c; j++)
    {
        v[j] = 0;

        for(i=0; i<l; i++)
            v[j] += M[i][j];
    }
    return;
}

void imprime_vetor (int v[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("%d ", v[i]);
    }
}

int main ()
{
    int M[Q][Q], v[Q];

    preenche_matriz(M,Q,Q);
    imprime_matriz(M,Q,Q);
    preenche_vetor(M,v,Q,Q);
    printf("\n");
    imprime_vetor(v,Q);

}
