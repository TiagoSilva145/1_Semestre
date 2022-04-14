#include <math.h>
#include <stdio.h>

int main ()
{
    int a,m;

    printf("Por favor, escreva a quantidade de alunos e a quantidade de monitores, separando-os por enter:\n");
    scanf ("%d%d", &a,&m);

    if (a+m > 50)
    {
        printf("N");
    }
    else
    {
        printf("S");
    }


return 0;
}

