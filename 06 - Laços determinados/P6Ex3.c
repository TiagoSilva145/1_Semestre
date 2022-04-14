#include <math.h>
#include <stdio.h>

int main ()
{
    int x,y,c,i=0;

    printf("Por favor, digite dois valores e eu lhe direi quantos numeros impares existem entre eles: ");
    scanf ("%d%d", &x,&y);

    for(c=y+1;c<x;c++)
    {
        if (c % 2 == 1)
            i++;
    }
    printf("Entre %d e %d existem %d numeros impares.", y,x,i);

return 0;
}

