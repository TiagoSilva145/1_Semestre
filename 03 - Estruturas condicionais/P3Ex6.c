#include <math.h>
#include <stdio.h>

int main ()
{
    float s,c;

    printf("Por favor, digite o valor do saldo medio do ultimo ano e aperte enter:\n");
    scanf ("%f", &s);

    if (s <= 200.99)
    {
        printf ("O valor do credito especial eh R$0.00");
    }
    if (s >= 201.00 && s <= 400.99)
    {
        c = 20*s/100;
        printf("O valor do credito especial eh R$%.2f", c);
    }
    if (s >=401.00 && s <= 600.00)
    {
        c = 30*s/100;
        printf("O valor do credito especial eh R$%.2f", c);
    }
    if (s > 600.00)
    {
        c = 40*s/100;
        printf("O valor do credito especial eh R$%.2f", c);
    }

return 0;
}

