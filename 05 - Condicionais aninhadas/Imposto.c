#include <math.h>
#include <stdio.h>

int main ()
{
    int m;
    float s,v;

    printf("Por favor, digite o valor do seu salario: ");
    scanf ("%f", &s);
    printf("Agora digite o mes: ");
    scanf ("%d", &m);

    if (m > 0 && m < 5)
        {
        if (s <= 1499.15)
            v = 0;
        else if (s >= 1499.16 && s <= 2246.75)
            v = (s-1499.115)*0.075;
        else if (s >= 2246.76 && s <= 2995.70)
            v = ((s-2246.75)*0.15)+ 56.06925;
        else if (s >= 2995.71 && s <= 3743.19)
            v = ((s-2995.70)*0.225) + 168.41025;
        else
            v = ((s-3743.19)*0.275) + 336.593;
        }
    else
        {
        if (s <= 1566.61)
        v = 0;
        else if (s >= 1566.62 && s <= 2347.85)
            v = (s-1566.61)*0.075;
        else if (s >= 2347.86 && s <= 3130.51)
            v = ((s-2347.85)*0.15) + 58.59225;
        else if (s >= 3130.52 && s <= 3911.63)
            v = ((s-3130.51)*0.225) + 175.98975;
        else
            v = ((s-3911.63)*0.275) + 351.7395;
        }

        printf("O valor do imposto a ser pago eh de R$%.2f.", v);


return 0;
}

