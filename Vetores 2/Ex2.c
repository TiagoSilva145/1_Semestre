#include <stdlib.h>
#include <time.h>


void preenche_vetor (int v[], int n)
{
    int i;

    for(i=0;i<n;i++)
        v[i]=rand()%10;
}

void imprime_vetor (int v[], int n)
{
    int i;

    for(i=0;i<n;i++)
        printf("%d ", v[i]);
    printf("\n");
}

void imprime_inverso (int v[], int n)
{
    int i;

    for(i=n-1;i>=0;i--)
        printf("%d ", v[i]);
    printf("\n");
}

int main ()
{
    int v[10];

    srand(time(NULL));

    preenche_vetor(v,10);
    imprime_vetor(v,10);
    imprime_inverso(v,10);

    return 0;
}
