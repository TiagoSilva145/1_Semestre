#include <stdio.h>

int main ()
{
    int n,c=1,i=1,j=0,a,b;

    printf("Por favor, digite a quantidade de numeros na sequencia: ");
    scanf ("%d", &n);

    printf("Digite o valor do %do numero: ", c);
    scanf ("%d", &a);

    for(c=2;c<=n;c++)
    {
        printf("Digite o valor do %do numero: ", c);
        scanf ("%d", &b);

        if(b>a)
            i++;
        else if (j <= i)
        {
            j=i;
            i=1;
        }
        a=b;
    }

    printf("O comprimento de um segmento crescente maximo eh %d.", j);


return 0;
}

