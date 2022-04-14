#include <math.h>
#include <stdio.h>

int main ()
{
    int n,c;
    float v1,v2,v3,m;

    printf("Por favor, digite o numero de testes a serem feitos: ");
    scanf ("%d", &n);

    for(c=1;c<=n;c++)
    {
        printf("Digite os tres valores que serao usados para calcular a media: ");
        scanf ("%f%f%f", &v1,&v2,&v3);
        m = 0.2*v1 + 0.3*v2 + 0.5*v3;
        printf("A media ponderada dos valores eh: %.1f\n", m);
    }

return 0;
}
