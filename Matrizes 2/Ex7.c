#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 3
#define Q 3
#define C 3

void preenche_matriz_aleatoria (int M[][C], int l, int c)
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            M[i][j] = (rand() % 2)+1;
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

void zera_matriz (int M[][C], int l, int c)
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            M[i][j] = 0;
}

void copia_matriz(int A[][C], int B[][C], int l, int c)
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            A[i][j] = B[i][j];
}

void multiplica_matriz(int A[][C], int B[][C], int D[][C], int l, int c)
{
    int i,j,k;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            for(k=0; k<c; k++)
                D[i][j] += (A[i][k] * B[k][j]);
}

int main ()
{
    int A[Q][Q], B[Q][Q], D[Q][Q], n, i;


    preenche_matriz_aleatoria(A,Q,Q);
    printf("Matriz A:\n");
    imprime_matriz(A,Q,Q);

    preenche_matriz_aleatoria(B,Q,Q);
    printf("\nMatriz B:\n");
    imprime_matriz(B,Q,Q);

    zera_matriz(D,Q,Q);
    multiplica_matriz(A,B,D,Q,Q);
    printf("\nMatriz A*B:\n");
    imprime_matriz(D,Q,Q);

    zera_matriz(D,Q,Q);
    multiplica_matriz(A,A,D,Q,Q);
    printf("\nMatriz A^2:\n");
    imprime_matriz(D,Q,Q);

    printf("\nDigite n:");
    scanf("%d", &n);

    if(n==1)
    {
        printf("\nMatriz A^%d:\n", n);
        imprime_matriz(A,Q,Q);
    }
    else
    {
        printf("\nMatriz A^%d:\n", n);

        zera_matriz(D,Q,Q);
        copia_matriz(B,A,Q,Q);
        for(i=1; i<n; i++)
        {
            multiplica_matriz(B,A,D,Q,Q);
            copia_matriz(B,D,Q,Q);
            zera_matriz(D,Q,Q);
        }
        imprime_matriz(B,Q,Q);
    }






















}
