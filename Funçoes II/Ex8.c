#include <stdio.h>

int paridade (int tamanho)
{
    int tamanho,a,cont,i;

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

int main ()
{
    printf("%d", paridade());















}
