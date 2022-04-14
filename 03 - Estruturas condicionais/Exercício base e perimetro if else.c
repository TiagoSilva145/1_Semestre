#include <math.h>
#include <stdio.h>

int main ()
{

    float b,h,p,a;

    printf("Por favor, digite a base e a altura do retangulo, dando enter entre as variaveis:\n");
    scanf ("%f\n%f", &b,&h);

    p = 2*b + 2*h;
    a = b * h;

     if (p>a) { printf ("O perimetro eh maior que a area"); }
else if (a>p) { printf ("A area eh maior que o perimetro"); }
else          { printf ("A area eh igual ao perimetro");       }


return 0;
}
