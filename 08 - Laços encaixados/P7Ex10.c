#include <math.h>
#include <stdio.h>

int main ()
{
    int n=2,i=0,c;

    while(i==0)
    {
        i=1;
        for(c=2;c<=20;c++)
        {
            if(n%c != 0)
            {
                i=0;
                n = n+2;
                break;
            }
        }
    }

    printf("%d", n);


return 0;
}

