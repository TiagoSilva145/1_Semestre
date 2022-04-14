#include <math.h>
#include <stdio.h>

int main ()
{
    int c1,c2,l;

    printf("Por favor, digite o numero de linhas: ");
    scanf ("%d", &l);
    printf(" ");

    for(c1=1;c1<=l;c1++)
        printf(" %d", c1);
        printf("\n");

    for(c1=1;c1<=l;c1++)
    {
        printf("%d ", c1);

        for(c2=1;c2<=c1;c2++)
            printf("%d ", c1*c2);

        printf("\n");
    }


return 0;
}

