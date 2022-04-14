#include <math.h>
#include <stdio.h>

int main ()
{
    int a,b,c,q1,q2,q3;

    printf("Por favor, coloque a quatidade de xicaras de farinha de trigo, de ovos e de colheres de sopa de leite, seprando-as por espaco:\n");
    scanf ("%d\n%d\n%d", &a,&b,&c);

    q1 = a/2;
    q2 = b/3;
    q3 = c/5;

    if (q1 <= q2 && q1 <= q3)
    {
        printf("Eh possivel fazer %d bolo(s) com essa quantidade de ingredientes.", q1);
    }
    else if (q2 <= q1 && q2 <= q3)
    {
        printf("Eh possivel fazer %d bolo(s) com essa quantidade de ingredientes.", q2);
    }
    else
    {
        printf("Eh possivel fazer %d bolo(s) com essa quantidade de ingredientes.", q3);
    }


return 0;
}

