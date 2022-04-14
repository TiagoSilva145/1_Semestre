#include <stdio.h>

int main ()
{
    int n,aux1,aux2,c=1;

    printf("Por favor, digite o valor de n: ");
    scanf ("%d", &n);

    printf("Digite o %do numero: ", c);
    scanf ("%d", &aux2);

    for(c=2;c<=n;c++)
    {
        printf("Digite o %do numero: ", c);
        scanf ("%d", &aux1);
        if (aux2 > aux1)
        {
            printf("Nao eh uma sequencia crescente.");
            return 0;
        }
        aux2 = aux1;
    }
    printf("Eh uma sequencia crescente.");


return 0;
}

