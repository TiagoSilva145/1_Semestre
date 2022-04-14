#include <math.h>
#include <stdio.h>

int main ()
{
    int c,n,aux1=0,aux2=1,aux3;

    printf("Por favor, digite quantos numeros da serie de Fibonacci voce deseja ver: ");
    scanf ("%d", &n);

    if (n == 1)
    {
        printf("0");
        return 0;
    }
    else if (n == 2)
    {
        printf("0 1");
        return 0;
    }

    printf("0 1");

    for(c=3;c<=n;c++)
    {
        aux3 = aux1 + aux2;
        printf(" %d", aux3);
        aux1 = aux2;
        aux2 = aux3;
    }

return 0;
}

