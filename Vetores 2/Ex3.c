#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float media_dos_pares(int v[], int n)
{
    int i,media=0,cont=0;

    for(i=0; i<n; i++)
    {
        if(v[i]%2 == 0)
        {
            media=media+v[i];
            cont++;
        }
    }
    return (float)media/cont;
}
