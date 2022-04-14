#include <stdio.h>

int contadigito (int d, int n)
{
    int i=0;

    while (n>0)
    {
        if(d==(n%10))
            i++;
        n=n/10;
    }
    return i;
}

int permutacao (int n1, int n2)
{
    int d,aux;

    aux = n1;

    while (aux>0)
    {
        d=aux%10;
        if(contadigito (d, n2) != contadigito (d, n1))
            return 0;
        aux=aux/10;
    }
    return 1;
}

int main ()
{
    printf("%d", permutacao (5412434,4312455));
}
