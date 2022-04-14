#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 4
#define C 4

int main ()
{
    int M[L][C], i, j, l, l2, aux[L];

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

    printf("Digite as linhas: ");
    scanf("%d%d", &l, &l2);


    for(i=0; i<L; i++)
    {
        aux[i] = M[l][i];
        M[l][i] = M[l2][i];
        M[l2][i] = aux[i];
    }

    printf("\n");
    for(i=0; i<L; i++)
    {
        for(j=0; j<C; j++)
            printf("%3d ", M[i][j]);
        printf("\n");
    }
}

