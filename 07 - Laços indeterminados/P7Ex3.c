#include <math.h>
#include <stdio.h>

int main ()
{
    int c=1,qp=0; // m = media, qp = quantidade de positivos
    float m=0,aux;

    printf("Voce pode parar a qualquer momento digitando -1000.\n");

    while(aux != -1000)
    {
        printf("Por favor, digite o %do valor: ", c);
        c++;
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


