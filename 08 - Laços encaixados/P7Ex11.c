#include <math.h>
#include <stdio.h>

int main ()
{
    int n,k,c=0,c2,i=1;

    printf("Por favor, digite os valores de n e k, ambos inteiros positivos: ");
    scanf ("%d%d", &n,&k);

    while (n <= 0)
    {
        printf("Digite um valor valido para n: ");
        scanf ("%d", &n);
    }

    while (k <= 0)
    {
        printf("Digite um valor valido para k: ");
        scanf ("%d", &k);
    }
    k++;

    while(c<n)
    {
        for(c2=1;c2<k;c2++)
        {
            if(k%c2==0 && c2!=1)
            {
                i = 0;
                break;
            }
        }
            if(i==1)
            {
                printf("%d ", k);
                c++;
            }
            i = 1;
            k++;
    }


return 0;
}

