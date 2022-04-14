#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define t 9

int* aloca_vetor (int tam)
{
    int *v;

    v = (int *) calloc(tam,sizeof(int));

    return v;
}

void preenche_vetor_aleatorio (int *v, int tam)
{
    int i;

    for(i=0; i<tam; i++)
        v[i] = rand() % 10;
}


void imprime_vetor (int *v, int tam)
{
    int i;

    printf("\n");

    for(i=0; i<tam; i++)
        printf("%3d ", v[i]);
}

void copia_vetor (int *v, int *v2, int tam)
{
    int i;

    for(i=0; i<tam; i++)
        v[i] = v2[i];
}

int elimina_repetidos (int *v, int* v2, int tam)
{
    int i, j, ind, cont = 0, *vc;

    vc = aloca_vetor(tam);

    for(i=0; i<tam; i++)
    {
        ind = 1;
        for(j=i-1; j>-1; j--)
        {
            if(v[i] == v[j])
            {
                ind = 0;
                break;
            }
        }
        if (ind)
        {
            vc[cont] = v[i];
            cont++;
        }
    }

    v2 = (int *) calloc(cont,sizeof(int));

    copia_vetor(v2,vc,cont);

    free(vc);

    return cont;
}

int main ()
{
    int v[t], *v2, tam2, i;

    //srand(time(NULL));

    preenche_vetor_aleatorio(v,t);
    imprime_vetor(v,t);

    tam2 = elimina_repetidos(v,v2,t);

    imprime_vetor(v2,tam2);

    free(v2);
}
