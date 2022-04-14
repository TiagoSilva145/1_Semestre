#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int** aloca_matriz (int l, int c)
{
    int i, **M;

    M = (int **) calloc(l,sizeof(int *));

    for(i=0; i<l; i++)
        M[i] = (int *) calloc(c,sizeof(int));

    return M;
}

int * aloca_vetor (int tam)
{
    int *v;

    v = (int *) calloc(tam,sizeof(int));

    return v;
}

void preenche_matriz (int **M, int l, int c)
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            scanf("%d", &M[i][j]);
}

void preenche_vetor (int *v, int tam)
{
    int i;

    for(i=0; i<tam; i++)
        scanf("%d", &v[i]);
}

void desaloca_matriz (int** M, int l)
{
    int i;

    for(i=0; i<l; i++)
        free(M[i]);
    free(M);
}

void custo_cidades (int *v, int tam, int **M)
{
    int i,j, custo = 0;

    for(i=0; i<(tam-1); i++)
        custo += M[v[i]][v[i+1]];

    printf("%d", custo);
}

int main ()
{
    int **C, *it, or, tam;

    printf("Digite a dimensao da matriz de custo:");
    scanf ("%d", &or);

    C = aloca_matriz(or,or);
    printf("Digite a matriz: ");
    preenche_matriz(C,or,or);

    printf("Digite a dimensao do vetor itinerario:");
    scanf ("%d", &tam);

    it = aloca_vetor(tam);
    printf("Digite o vetor: ");
    preenche_vetor(it, tam);

    custo_cidades(it, tam, C);

    free(it);

    desaloca_matriz(C,or);
}
