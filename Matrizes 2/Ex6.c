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

void soma_matrizes (int M[][C], int M2[][C])
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            M2[i][j] -= M[i][j];
}
void subtrai_matriz (int M[][C], int M2[][C])
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            M2[i][j] -= M[i][j];
}

void soma_constante (int M[][C], int M2[][C], int c)
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
        {
            M[i][j] += c;
            M2[i][j] += c;
        }
}

int main ()
{
    int M[Q][Q], M2[Q][Q], a = 0;

    printf("Digite:\n0 pra criar duas matrizes\n1 para somar as duas matrizes\n2para subtrair a primeira matriz da segunda\n3 para adicionar uma constante as duas matrizes\n4 para imprimir as matrizes\n-1 para finzalizar o programa\n");

    while (a != -1)
    {
        switch(a)
        {
            case (0)
                {
                    preenche_matriz(M,Q,Q);
                    preenche_matriz(M2,Q,Q);
                }
            case (1)

        }
    }

















}
