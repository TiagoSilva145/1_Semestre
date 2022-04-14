#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordena_vetor (int v[], int n)
{
    int i,j,aux;

    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(v[i] > v[j])
            {
                aux  = v[j];
                v[j] = v[i];
                v[i] =  aux;
            }
        }
    }
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
    int v[10];

    preenche_vetor(v,10);
    imprime_vetor(v,10);

    ordena_vetor(v,10);
    imprime_vetor(v,10);
}
