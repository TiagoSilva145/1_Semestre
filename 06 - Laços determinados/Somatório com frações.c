#include <math.h>
#include <stdio.h>

int main ()
{
    float s=0;
    int   n=1,d=1;

    while (d<=50)
    {
        s = s + (float)n/d;
        n = n + 2;
        d = d + 1;
    }

    printf("O valor de s eh: %f", s);

return 0;
}
