#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 3
#define C 3
#define Q 3

void preenche_matriz_aleatoria (int M[][C], int l, int c)
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            M[i][j] = rand() % 11;
    return;
}

void imprime_matriz (int M[][C], int l, int c)
{
    int i,j;

    printf("\nMatriz :\n");

    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
            printf("%3d ", M[i][j]);
        printf("\n");
    }
}

int main ()
{
    int *p1, *p2, *p3, tam1, tam2, i;

    srand(time(NULL));

    printf("Digite o tamanho dos vetores:");
    scanf("%d%d", &tam1, &tam2);

    p1 = (int *) calloc(tam1, sizeof(int));
    preenche_matriz_aleatoria(p1,1,tam1);
    imprime_matriz(p1,1,tam1);

    p2 = (int *) calloc(tam2, sizeof(int));
    preenche_matriz_aleatoria(p2,1,tam2);
    imprime_matriz(p2,1,tam2);

    if(tam1 > tam2)
        tam1 = tam2;

    p3 = (int *) calloc(tam1, sizeof(int));

    for(i=0; i<tam1; i++)
        p3[i] = p2[i] * p1[i];

    imprime_matriz(p3,1,tam1);

    free (p1);
    free (p2);
    free (p3);
}
