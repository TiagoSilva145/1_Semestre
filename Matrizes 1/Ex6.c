#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 10
#define C 10

int main ()
{
    int M[L][C], i, j, maior, minmax, coluna = 0, linha = 0;

    srand(time(NULL));

    for(i=0; i<L; i++)
        for(j=0; j<C; j++)
            M[i][j] = rand() % 100;

    for(i=0; i<L; i++)
    {
        for(j=0; j<C; j++)
            printf("%3d ", M[i][j]);
        printf("\n");
    }

    maior = M[0][0];

    for(i=0; i<L; i++)
    {
        for(j=0; j<C; j++)
        {
            if (maior < M[i][j])
            {
                maior = M[i][j];
                linha = i;
            }
        }
    }

    minmax = M[linha][0];

    for(j=1; j<C; j++)
    {
        if(minmax > M[linha][j])
        {
            minmax = M[linha][j];
            coluna = j;
        }
    }

    printf ("O elemento minmax da matriz se encontra em %d X %d e tem valor %d.\nO maior elemento da matriz eh %d.", linha, coluna, minmax, maior);
}
