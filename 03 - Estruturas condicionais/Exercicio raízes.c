#include <math.h>
#include <stdio.h>

int main ()
{
    float a,b,c,r1,r2,disc;

    printf("Por favor, digite os coeficientes da eq. quadratica, separados por enter:\n");
    scanf ("%f\n%f\n%f", &a,&b,&c);

    disc = pow(b,2) - (4*a*c);

    if (disc < 0)
    {
        printf("As raizes da eq. sao numeros complexos.");
    }
    else if (disc == 0)
    {
        r1 = -b/(2*a);
        printf("A unica raiz da eq. eh: %f", r1);
    }
    else
    {
        r1 = (-b + disc)/(2*a);
        r2 = (-b - disc)/(2*a);
        printf("As raizes da eq. sao: %f e %f", r1,r2);
    }


return 0;
}
