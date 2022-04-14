#include <stdlib.h>
#include <time.h>

srand(time(NULL));

void preenche_vetor (int v[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        v[i]=rand()%10;
    }
}
