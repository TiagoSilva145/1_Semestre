#include <stdio.h>

int segmento (int a, int b)
{
    int i=1;

    while (a>0 && b>0)
    {
        if(a%10 != b%10)
        {
            i=0;
            break;
        }
        a=a/10;
        b=b/10;
    }

    return i;
}

int main ()
{
    printf("%d", bsegmentodea (2457,245));
}
