#include <math.h>
#include <stdio.h>

int main ()
{
    int c1=1,c2=1,s1,s2=0,n;

    printf("Por favor, digite o valor do %do numero do cpf: ", c1);
    scanf ("%d", &n);
    c1++;
    s1=n;

    while(n != -1)
    {
        printf("Digite o valor do %do numero: ", c1);
        scanf ("%d", &n);

        if(n != -1)
        {
            s1 = s1 + c1*n;
            s2 = s2 + c2*n;
            c1++;
            c2++;
        }
    }

    printf("Os digitos de verificacao de seu cpf sao: ");

    n = (s1%11)%10;
    s2 = s2 + c2*n;
    printf("%d ", n);

    n = (s2%11)%10;
    printf("%d ", n);

return 0;
}
