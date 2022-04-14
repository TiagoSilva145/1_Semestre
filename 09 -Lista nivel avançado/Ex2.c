#include <math.h>
#include <stdio.h>

int main ()
{
    int n,n2=0,aux;

    printf("Por favor, digite um numero e eu lhe direi se ele eh um palindrome: ");
    scanf ("%d", &n);
    aux=n;

    while(aux>0)
    {
        if(aux>=10)
            n2 = n2*10 + aux%10;
        else
            n2 = n2*10 + aux;
        aux = aux/10;
    }

    if(n == n2)
        printf("Seu numero eh palindrome");
    else
        printf("Seu numero nao eh palindrome");

return 0;
}

