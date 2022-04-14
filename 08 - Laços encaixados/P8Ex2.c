#include <math.h>
#include <stdio.h>

int main ()
{
    int m,s=0,f=-1,c1,c2;

    printf("Por favor, digite o valor de m: ");
    scanf ("%d", &m);

    for(c1=1;c1<=m;c1++)
    {
        printf("%d^3 =", c1);

        for(c2=1;c2<=c1;c2++)
        {
            f = f + 2;
            printf(" %d", f);
            if (c2 != c1)
                printf(" +");
            else
                printf("\n");
        }

    }


return 0;
}

