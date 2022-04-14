#include <stdio.h>

int arredonda (float n)
{
    if(n>0)
        n = n+0.5;
    else
        n = n-0.5;

    return n;

}

