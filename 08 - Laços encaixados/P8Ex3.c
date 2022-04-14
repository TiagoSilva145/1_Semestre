#include <math.h>
#include <stdio.h>

int main ()
{
    int n,c1,c2,f;

    printf("Por favor, digite o valor de n: ");
    scanf ("%d", &n);

    for(c1=0-n;c1<=n;c1++)
    {
        f = c1*c1 + c1 + 1;
        printf ("%d ", c1);
        for(c2=1;c2<=f;c2++)
        {
            if(c2 != f)
                printf(".");
            else
                printf("*\n");
        }

    }


return 0;
}

