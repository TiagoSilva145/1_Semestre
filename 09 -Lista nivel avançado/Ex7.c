#include <stdio.h>

int main ()
{
    int n1,n2=0,aux=1,m=0,c1,c2;

    for(c1=100;c1<=999;c1++)
    {
        for(c2=100;c2<=999;c2++)
        {
            n1=c1*c2;
            aux=n1;
            while(aux>0)
            {
                n2= n2*10 + aux%10;
                aux=aux/10;
            }
            if(n2==n1 && n2>m)
                m=n1;
            n2=0;
        }
    }

    printf("O maior palindrome feito a partir do produto de numeros de tres digitos eh: %d", m);


return 0;
}

