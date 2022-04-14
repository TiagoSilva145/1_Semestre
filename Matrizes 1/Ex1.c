#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 5
#define C 5

int main ()
{
    int M[L][C], trans[C][L], i, j;

    srand(time(NULL));

    for(i=0; i<L; i++)
        for(j=0; j<C; j++)
            M[i][j] = rand() % 101;

    for(i=0; i<L; i++)
    {
        for(j=0; j<C; j++)
            printf("%3d ", M[i][j]);
        printf("\n");
    }

    for(i=0; i<L; i++)
        for(j=0; j<C; j++)
            trans[j][i] = M[i][j];

    printf("\n");

    for(i=0; i<L; i++)
    {
        for(j=0; j<C; j++)
            printf("%3d ", trans[i][j]);
        printf("\n");
    }

    return 0;

}
