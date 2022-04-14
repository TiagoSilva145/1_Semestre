#include <math.h>
#include <stdio.h>

int main ()
{
    int n,c;

    printf("Por favor, digite um numero inteiro e eu lhe darei sua tabuada: ");
    scanf ("%d", &n);

    for(c=1;c<=10;c++)
    {
        printf("%d x %d = %d\n", n,c,n*c);
    }

return 0;
}

