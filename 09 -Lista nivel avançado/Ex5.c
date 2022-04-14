#include <stdio.h>

int main ()
{
    int n,c1=1,c2=2,a,b,i=1,j,k=1,l=1;

    printf("Digite o tamanho da sequencia: ");
    scanf ("%d", &n);

    printf("Digite a sequencia de numeros: ");
    scanf ("%d", &a);

    while(c1==1)
    {
        scanf("%d", &b);
        c2++;

        if ( (a%2==0 && b%2==0) || (a%2==1 && b%2==1) )
            i++;
        else
            c1=0;

        a=b;
        if(c2>n)
            break;
    }

    j=i;

    if(c2<=n)
        i=1;

    while(c2<=n)
    {
        scanf("%d", &b);

        if( (a%2==0 && b%2==0) || (a%2==1 && b%2==1) )
            i++;
        else if(i==j)
        {
            i=1;
            l=0;
        }
        else
            k=0;

        a=b;
        c2++;
    }

    if(l==1 && i!=j)
        k=0;

    if(k==0)
        printf("A sequencia nao eh alternante.");
    else
        printf("A sequencia eh %d-alternante.", j);


return 0;
}

