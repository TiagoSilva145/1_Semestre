#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void intercala_vetores (int v1[], int v2[], int v3[], int n)
{
    int i,j=0;

    for(i=0; i<n*2; i=i+2)
    {
        v3[i]=v1[j];
        j++;
    }

    j=0;

    for(i=1; i<n*2; i=i+2)
    {
        v3[i]=v2[j];
        j++;
    }
}

int main ()
{
    int v1[10], v2[10],v3[20];

    srand(time(NULL));

    preenche_vetor(v1,10);
    preenche_vetor(v2,10);

    imprime_vetor(v1,10);
    imprime_vetor(v2,10);

    intercala_vetores(v1,v2,v3,10);

    imprime_vetor(v3,20);
}
