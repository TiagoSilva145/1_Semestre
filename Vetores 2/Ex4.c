#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float media_dos_pares(int v[], int n, int *maior, int *menor)
{
    int i,media=0,cont=0;

    *maior=v[0];
    *menor=v[0];

    for(i=0; i<n; i++)
    {
        if(v[i]%2 == 0)
        {
            media=media+v[i];
            cont++;
        }
        if(v[i] > *maior)
            *maior=v[i];
        else if (v[i] < *menor)
            *menor=v[i];

    }
    return (float)media/cont;
}

void preenche_vetor (int v[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        v[i]=rand()%10;
    }
}

void imprime_vetor (int v[], int n)
{
    int i;

    for(i=0; i<n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main ()
{
    int v[10], maior, menor;

    srand(time(NULL));

    preenche_vetor(v,10);
    imprime_vetor(v,10);

    printf("Media dos pares = %.2f\n", media_dos_pares(v, 10, &maior, &menor));
    printf("Maior = %d\nMenor = %d", maior,menor);

    return 0;
}












