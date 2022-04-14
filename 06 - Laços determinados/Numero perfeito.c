#include <math.h>
#include <stdio.h>

int main ()
{
    int c,n,s=0;

    printf("Por favor, digite um numero e eu lhe direi se ele eh um numero perfeito: ");
    scanf ("%d", &n);

    for(c=1;c<n;c++)
    {
        if (n % c == 0)
            s = s + c;
    }
    if (s == n)
        printf("%d eh um numero perfeito.", n);
    else
        printf("%d nao eh um numero perfeito.", n);

return 0;
}
