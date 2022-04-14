#include <stdio.h>

int main ()
{
    int n,s=-1,c;

    printf("Por favor, me diga um valor e eu lhe direi se ele eh triangular: ");
    scanf ("%d", &n);

    for(c=0;s<n;c++)
    {
        s = c*(c+1)*(c+2);
        if(s == n)
        {
            printf("Seu numero eh um numero triangular.");
            return 0;
        }
    }
    printf("Seu numero nao eh um numero triangular.");


return 0;
}

