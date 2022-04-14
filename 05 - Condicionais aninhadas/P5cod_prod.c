     #include <math.h>
#include <stdio.h>

int main ()
{
    char a;
    float p1=1.2*7,p2=2.5*5,p3=59.0*3,p4=124.0*2;
    printf("Por favor, forneca o codigo do produto, os valores validos sao de A a D: ");
    scanf ("%c", &a);

    if (a == 'A')
            printf("Lampada 60W: o valor total eh de R$%.2f", p1);
    else
        if (a == 'B')
            printf("Lampada 100W: o valor total eh de R$%.2f", p2);
    else
        if (a == 'C')
            printf("Reator de partida lenta: o valor total eh de R$%.2f", p3);
    else
        if (a == 'D')
            printf("Reator de partida rapida: o valor total eh de R$%.2f", p4);
    else
        printf("Produto nao disponivel no estoque");


return 0;
}

