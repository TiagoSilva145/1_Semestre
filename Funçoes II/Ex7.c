#include <stdio.h>

int piramidal ()
{
    int tamanho,a,cont,i;

    printf("Digite a quantidade de numeros na sequencia: ");
    scanf ("%d", &tamanho);

    printf("Digite a sequencia de numeros: ");

    scanf("%d", &a);
    i = a%2;

    for(cont=2;cont<=tamanho;cont++)
    {
        scanf("%d", &a);
        if (a%2 != i)
            i=-1;
    }

    return i;
}
