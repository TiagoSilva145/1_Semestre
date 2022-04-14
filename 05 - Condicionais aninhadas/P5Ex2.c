#include <math.h>
#include <stdio.h>

int main ()
{
    int aa,an,
        ma,mn,
        da,dn,
        idade;

    printf("Por favor, digite sua data de nascimento no modelo dd/mm/aaaa , e aperte enter: ");
    scanf ("%d/%d/%d", &dn,&mn,&an);
    printf("Agora digite a data atual e aperte enter: ");
    scanf ("%d/%d/%d", &da,&ma,&aa);

    idade = aa - an;

    if (ma < mn)
        idade = idade - 1;
    else if (ma == mn && da < dn)
        idade = idade - 1;

    printf("Voce possui: %d anos de idade.", idade);


return 0;
}

