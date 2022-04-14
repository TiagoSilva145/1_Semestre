#include <math.h>
#include <stdio.h>

int main ()
{
    int c1=1,c2=1,s1,s2=0,n,v1,v2,n10,n11;

    printf("Por favor, digite o valor do %do numero do cpf: ", c1);
    scanf ("%d", &n);
    c1++;
    s1=n;

    while(c1<=9)
    {
        printf("Digite o valor do %do numero: ", c1);
        scanf ("%d", &n);
        s1 = s1 + c1*n;
        s2 = s2 + c2*n;
        c1++;
        c2++;
    }

    printf("Digite o valor do %do numero: ", 10);
    scanf ("%d", &n10);
    printf("Digite o valor do %do numero: ", 11);
    scanf ("%d", &n11);

    v1 = (s1%11)%10;
    s2 = s2 + c2*v1;
    v2 = (s2%11)%10;

    if(v1 != n10 || v2 != n11)
        printf("Os digitos de verificacao estao incorretos.");
    else
        printf("Os digitos de verificacao estao corretos.");

return 0;
}

