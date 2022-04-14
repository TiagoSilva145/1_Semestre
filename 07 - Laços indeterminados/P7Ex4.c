#include <math.h>
#include <stdio.h>

int main ()
{
    int c;
    float ze=1.1,chi=1.5;

    while (ze < chi)
    {
        ze = ze + 0.03;
        chi = chi + 0.02;
        c++;
    }

    printf("Serao necessarios %d anos para que Ze seja maior que Chico.", c);

return 0;
}

