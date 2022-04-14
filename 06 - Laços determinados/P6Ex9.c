#include <math.h>
#include <stdio.h>

int main ()
{
    int c,q,r,s;

    for(c=1000;c<10000;c++)
    {
        q = c / 100;
        r = c % 100;
        s = q + r;
        if (s*s == c)
            printf("%d ", c);
    }


return 0;
}

