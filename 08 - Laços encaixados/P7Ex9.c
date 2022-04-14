#include <math.h>
#include <stdio.h>

int main ()
{
    int c,c2,n,i=1,s=0;

    for(c=1;c<=10;c++)
    {
        printf("Por favor, digite o %do numero: ", c);
        scanf ("%d", &n);

        for(c2=1;c2<n;c2++)
        {
            if(n % c2 == 0 && c2!=1)
            {
                i=0;
                break;
            }
        }
        if(i==1)
            s = s + n;
        i = 1;
    }

    printf("A soma de todos os primos eh: %d.", s);


return 0;
}

