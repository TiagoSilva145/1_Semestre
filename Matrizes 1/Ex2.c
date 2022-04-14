#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 4
#define C 3

int main ()
{
    int M[L][C], i, j, l, c, soma=0;

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

    printf("\nDigite a linha e a coluna: ");
    scanf ("%d%d", &l,&c);

    l--;
    c--;

    for(i=0; i<L; i++)
        soma += M[i][c];
    for(i=0; i<C; i++)
        soma += M[l][i];

    soma -= M[l][c];

    printf("Soma = %d", soma);


    return 0;

}

