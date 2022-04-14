#include <stdio.h>

int main ()
{
    int n,aux1,aux2,c=1,i1,i2; // i = indicador

    printf("Por favor, digite o valor de n: ");
    scanf ("%d", &n);

    printf("Digite o %do numero: ", c);
    scanf ("%d", &aux2);
    c++;

    printf("Digite o %do numero: ", c);
    scanf ("%d", &aux1);
    c++;

    while(aux2 == aux1)
    {
        c++;
        printf("Digite o %do numero: ", c);
        scanf ("%d", &aux1);
    }

    if(aux1 > aux2)
        i1=1;
    else              //1 = crescente, 2 = decrescente.
        i1=2;
    i2=i1;

    while(c<=n)
    {
        printf("Digite o %do numero: ", c);
        scanf ("%d", &aux2);
        if (aux2 > aux1)
            i1=1;
        else if (aux1 > aux2)
            i1=2;
        c++;
        if (i1 != i2)
            break;
    }
    while(c<=n)
    {
        printf("Digite o %do numero: ", c);
        scanf ("%d", &aux2);
        c++;
    }

    if(i2 == i1)
    {
        if(i2 == 1)
            printf("Eh uma sequencia crescente.");
        else
            printf("Eh uma sequencia decrescente.");
    }
    else
        printf("Eh uma sequencia desordenada");

return 0;
}


