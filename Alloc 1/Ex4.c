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

void imprime_matriz (int **M, int l, int c)
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
    int **M, or, i, j;

    printf("Digite o numero de linhas do triangulo de pascal: ");
    scanf("%d", &or);

    M = aloca_matriz(or,or);

    for(i=0; i<or; i++)
    {
        for(j=0; j<(i+1); j++)
        {
            if (j == 0 || j == i)
                M[i][j] = 1;
            else
                M[i][j] = M[i-1][j] + M [i-1][j-1];
        }
    }

    imprime_matriz(M,or,or);

    free(M);

    return 0;
}
