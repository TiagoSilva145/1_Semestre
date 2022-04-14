#include <stdio.h>

int paridade (int n);

int main ()
{
    int n,i=1,par1,par2;

    printf("Digite o tamanho da sequencia de numeros: ");
    scanf ("%d", &n);

    printf("Digite a sequencia de numeros: ");

    par1=paridade(i);
    i++;
    n--;

    while (n>0)
    {
        par2=paridade(i);
        n=n-i;
        if(n<0 || par2 == -1 || par2 == par1)
        {
            printf("%d\n", par1);
            printf("%d\n", par2);
            printf("%d\n", n);
            printf("A sequencia nao eh piramidal alternante.");
            return 0;
        }
        par1=par2;
        i++;
    }

    printf("A sequencia eh piramidal %d alternante.", i-1);
}

int paridade (int n)
{
    int a,cont,i;

    scanf("%d", &a);
    i = a%2;

    for(cont=2;cont<=n;cont++)
    {
        scanf("%d", &a);
        if (a%2 != i)
            i=-1;
    }

    return i;
}
