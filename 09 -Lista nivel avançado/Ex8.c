#include <stdio.h>

int main ()
{
    int c1,c2,i=0;

    for(c1=2520;i==0;c1++)
    {
        i=1;
        for(c2=2;c2<=20;c2++)
        {
            if(c1%c2!=0)
                i=0;
        }
        if(i==1)
            break;
    }

    printf("%d eh o menor numero que pode ser dividido por cada um dos numeros de 1 a 20.", c1);


return 0;
}

