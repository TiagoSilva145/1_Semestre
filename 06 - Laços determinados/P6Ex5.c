#include <math.h>
#include <stdio.h>

int main ()
{
    int c,qp=0; // m = media, qp = quantidade de positivos
    float m=0,aux;

    for(c=1;c<=6;c++)
    {
        printf("Por favor, digite o %do valor ", c);
        scanf ("%f", &aux);
        if (aux > 0)
        {
            qp++;
            m = m + aux;
        }
    }
    m = m/qp;
    printf("Dentre os valores digitados, %d sao positivos e a media entre os positivos eh %.1f.", qp,m);

return 0;
}

