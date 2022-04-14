#include <stdio.h>

#define L 4
#define C 4
#define Q 4

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

void preenche_produto (int M[][C], int l, int c)
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            M[i][j] = i*j;
}

int main ()
{
    int M[16];

    preenche_produto(M,Q,Q);
    imprime_matriz(M,Q,Q);

    return 0;
}
