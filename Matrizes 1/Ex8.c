#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 3
#define C 3
#define Q 3

int main ()
{
    int M[Q][Q], i, j, nulos, valido;

    for(i=0; i<Q; i++)
    {
        for(j=0; j<Q; j++)
            scanf("%d", &M[i][j]);
    }

    for(i=0; i<Q; i++)
    {
        nulos = 0;
        valido = 0;
        for(j=0; j<Q; j++)
        {
            if(M[i][j] == 0)
                nulos++;
            else
                valido++;
        }

        if (nulos != Q-1 || valido != 1)
        {
            printf("A matriz nao eh permutacao.");
            return 0;
        }
    }

    printf("A matriz eh permutacao.");
    return 0;
}
