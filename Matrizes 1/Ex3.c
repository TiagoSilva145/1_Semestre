#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 4
#define C 4

int main ()
{
    int M[L][C], i, j, maior, coluna;

    srand(time(NULL));

    for(i=0; i<L; i++)
        for(j=0; j<C; j++)
            M[i][j] = rand() % 11;

    for(i=0; i<L; i++)
    {
        for(j=0; j<C; j++)
            printf("%3d ", M[i][j]);
        printf("\n");
    }

    for(i=0; i<L; i++)
    {
        maior = M[i][0];
        coluna = 0;
        for(j=1; j<C; j++)
        {
            if (maior < M[i][j])
            {
                maior = M[i][j];
                coluna = j;
            }
        }
        M[i][coluna] = M[i][i];
    }

    printf("\n");

    for(i=0; i<L; i++)
    {
        for(j=0; j<C; j++)
            printf("%3d ", M[i][j]);
        printf("\n");
    }

    return 0;
}
