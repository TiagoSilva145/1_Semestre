#include <math.h>
#include <stdio.h>

int main ()
{
    int n1,n2,aux,mmc;

    printf("Por favor, digite os dois valores que voce deseja calcular o mmc: ");
    scanf ("%d%d", &n1,&n2);

    if (n1 > n2)
    {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    mmc = n1*n2;
    aux = mmc;

    while (aux >= n2)
    {
        aux = aux - n1;
        if (aux % n2 == 0)
            mmc = aux;
    }

    printf("O mmc entre os %d e %d eh %d", n1,n2,mmc);

return 0;
}

