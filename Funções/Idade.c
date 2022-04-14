#include <stdio.h>

int idade()
{
    int aa,ma,da,a,m,d,i;

    printf("Digite sua data de nascimento: ");
    scanf ("%d/%d/%d", &d,&m,&a);

    printf("Digite a data de hoje: ");
    scanf ("%d/%d/%d", &da,&ma,&aa);

    i = aa - a;

    if (ma < m)
        i--;
    else if (ma == m && da < d)
        i--;

    return i;
}

