#include <math.h>
#include <stdio.h>

int main ()
{
    int c,v=7;

    printf("Por favor digite um numero inteiro que represente o consumo total de agua, em metros cubicos, de sua residencia: ");
    scanf ("%d", &c);

    if (c > 100)
        v = 160 + v + (c-100)*5;
    else if (c > 30)
        v = 20 + v + (c-30)*2;
    else if (c > 10)
        v = v + (c-10);

    printf("Sua conta de agua eh de: R$%d,00.", v);


return 0;
}

