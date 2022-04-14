#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));

    int v[30],aux,i,j=29;

    for(i=0;i<=29;i++)
    {
        v[i]=rand()%30;
    }

    printf("Vetor          : ");

    for(i=0;i<=29;i++)
    {
        printf("%3d ", v[i]);
    }

    for(i=0;i<=14;i++)
    {
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
        j--;
    }

    printf("\nVetor invertido: ");

    for(i=0;i<=29;i++)
    {
        printf("%3d ", v[i]);
    }






}
