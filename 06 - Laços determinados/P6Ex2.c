#include <math.h>
#include <stdio.h>

int main ()
{
    int n,c;

    printf("Por favor, digite um numero inteiro e eu lhe darei todos os numeros entre 1 e 100 que divididos por n dao resto 2: ");
    scanf ("%d", &n);

    for(c=1;c<=100;c++)
    {
        if (c % n == 2)
            printf("%d\n", c);
    }

return 0;
}

