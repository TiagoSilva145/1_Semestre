#include <math.h>
#include <stdio.h>

int main ()
{
    int aa,an,
        ma,mn,
        da,dn,
        idade,
        dds, aux, aux2; // dds = dia da semana

    printf("Por favor, digite sua data de nascimento no modelo dd/mm/aaaa , e aperte enter: ");
    scanf ("%d/%d/%d", &dn,&mn,&an);
    printf("Agora digite a data atual e aperte enter: ");
    scanf ("%d/%d/%d", &da,&ma,&aa);

    idade = aa - an;

    if (ma < mn)
        idade = idade - 1;
    else if (ma == mn && da < dn)
        idade = idade - 1;

    aux  = an % 100;
    aux2 = an / 100;
    dds  = (dn + (((mn + 1 )*26)/10) + aux + (aux/4) + (aux2/4) + 5*aux2) %7;

    printf("Voce possui: %d anos de idade.\n", idade);

    if (dds == 0)
        printf("Voce nasceu em um sabado.");
    else if (dds == 1)
        printf("Voce nasceu em um domingo.");
    else if (dds == 2)
        printf("Voce nasceu em uma segunda-feira.");
    else if (dds == 3)
        printf("Voce nasceu em uma terca-feira.");
    else if (dds == 4)
        printf("Voce nasceu em uma quarta-feira.");
    else if (dds == 5)
        printf("Voce nasceu em uma quinta-feira.");
    else if (dds == 6)
        printf("Voce nasceu em uma sexta-feira.");



return 0;
}

