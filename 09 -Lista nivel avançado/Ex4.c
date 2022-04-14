#include <stdio.h>

int main ()
{
    int  n,l,aux,aux2=1,c1,c2;
    char ch;

    printf("Por favor, digite o caracter que sera usado e o numero n: ");
    scanf ("%c%d", &ch,&n);

    l=2*n+1;
    aux=l/2;

    for(c1=1;c1<=aux;aux--)
    {
        for(c2=1;c2<=aux;c2++)
            printf(" ");
        for(c2=1;c2<=aux2;c2++)
            printf("%c", ch);
        for(c2=1;c2<=aux;c2++)
            printf(" ");
        printf("\n");
        aux2 = aux2+2;
    }
    aux=l/2;
    aux2=aux2-2;

    for(c1=1;c1<=l;c1++)
        printf("%c", ch);
    printf("\n");

    for(c1=1;c1<=aux;c1++)
    {
        for(c2=1;c2<=c1;c2++)
            printf(" ");
        for(c2=1;c2<=aux2;c2++)
            printf("%c", ch);
        for(c2=1;c2<=c1;c2++)
            printf(" ");
        aux2 = aux2-2;
    printf("\n");

    }


return 0;
}

