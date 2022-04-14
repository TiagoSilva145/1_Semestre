#include <math.h>
#include <stdio.h>

int main ()
{
    int n1=0,m=0;

    printf("Voce pode parar a qualquer momento digitando um valor negativo.\n");

    while(n1 >=0)
    {
        printf("Por favor, digite um valor: ");
        scanf ("%d", &n1);
        if (n1 > m)
            m = n1;
    }
    printf("O maior valor digitado foi %d.", m);


return 0;
}

