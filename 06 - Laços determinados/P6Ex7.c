#include <math.h>
#include <stdio.h>

int main ()
{
    int n,c,f,b=2;

    while(b=2){

    printf("Por favor, digite o valor de n ");
    scanf ("%d", &n);
    f = n;

    for(c=1;c<n;c++)
    {
        f = f * (n - c);
    }
    printf("O valor de n fatorial eh: %d", f);
    }

return 0;
}

