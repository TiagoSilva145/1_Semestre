#include <math.h>
#include <stdio.h>

int main ()
{
    int ano, rest1, rest2, rest3;

    printf("Por favor, digite o ano e eu lhe direi se ele eh bisexto:\n");
    scanf ("%d", &ano);

    rest1 = ano % 400;
    rest2 = ano % 100;
    rest3 = ano % 4;

    if (rest1 == 0 || rest2 != 0 && rest3 == 0)
    {
        printf("O ano eh bisexto");
    }

    else
    {
        printf("O ano nao eh bisexto");
    }

return 0;
}
