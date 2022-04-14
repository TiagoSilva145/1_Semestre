#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 5
#define C 5
#define Q 5

void preenche_vetor_bingo (int v[], int tam, int coluna)
{
    int i,j,ind=1, comp[tam];

    while(ind)
    {
        ind = 0;

        for(i=0; i<tam; i++)
            v[i] = (rand()%20 + 1 + (20*coluna));

        for(i=0; i<tam; i++)
            comp[i] = v[i];

        for(i=0; i<tam; i++)
        {
            for(j=(i+1); j<tam; j++)
                if(v[i] == comp[j])
                    ind = 1;
        }
    }
}

void coloca_vetor_coluna (int M[][C], int v[], int linha, int coluna)
{
    int i;

    for(i=0; i<linha; i++)
        M[i][coluna] = v[i];
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

int main ()
{
    int v[Q], M[Q][Q], i;

    srand(time(NULL));

    for(i=0; i<Q; i++)
    {
        preenche_vetor_bingo(v,Q,i);
        coloca_vetor_coluna(M,v,Q,i);
    }

    imprime_matriz(M,Q,Q);
    return 0;
}
