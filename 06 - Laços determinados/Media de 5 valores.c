#include <math.h>
#include <stdio.h>

int main ()
{
    float s,aux;
    int c,n;

    printf("Por favor, digite a quantidade de numeros que voce deseja calcular a media: ");
    scanf ("%d", &n);

    for(c=1;c<=n;c++)
    {
        printf("Digite o %do valor: ", c);
        scanf ("%f", &aux);
        s = s + aux;
    }

    printf("A soma dos valores eh: %f\n", s);
    printf("A media dos valores eh: %f.", s/n);

return 0;
}
