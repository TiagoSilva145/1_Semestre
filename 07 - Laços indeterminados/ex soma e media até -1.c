#include <math.h>
#include <stdio.h>

int main ()
{
    int aux=0,c=1,p;
    float s=0;

    printf("Para parar a repeticao voce pode digitar -1.\n");

    while (aux != -1)
    {
        printf("Por favor, digite o %do valor: ", c);
        scanf ("%d", &aux);
            if (aux != -1)
            {
                s = s + aux;
                c++;
            }
    }
    printf ("A soma dos valores eh: %.2f.\n", s);
    s = s/(c-1);

    printf("A media dos valores eh: %.2f.", s);


return 0;
}

