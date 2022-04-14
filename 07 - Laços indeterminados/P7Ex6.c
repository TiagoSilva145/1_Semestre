#include <math.h>
#include <stdio.h>

int main ()
{
    int h=1;
    float c;

    printf("Voce pode parar a qualquer momento digitando um valor negativo.\n");

    while (h >= 0)
    {
        printf("Por favor, digite o numero de porquinhos da India: ");
        scanf ("%d", &h);
        if (h >= 0)
        {
            c = (h*0.8)/2 + 10;
            printf("O custo para criar %d porquinho(s) da India eh: %.2f dolar(es)\n", h,c);
        }
    }


return 0;
}
