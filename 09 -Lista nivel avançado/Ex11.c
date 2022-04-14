#include <stdio.h>

int main ()
{
    int n=600851475143,c1=600851475141,c2,i=0;

    while(i==0)
    {
        i=1;
        if(n%c1==0)
        {
            for(c2=2;c2<c1;c2++)
            {
                if(c1%c2==0)
                {
                    i=0;
                    break;
                }
            }
        }
        else
            i=0;
        if(i==1)
            break;
        c1=c1-2;
    }
        printf("O maior fator primo de 600851475143 eh: %d", c1);


return 0;
}

