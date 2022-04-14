#include <stdio.h>

int pontuacao (int t1, int t2, int a1, int a2) // t1 = gols do time 1, a1 = aposta 1;
{
    int p=0;

    if(t1 == a1)
        p=p+5;
    if(t2 == a2)
        p=p+5;
    if (t2 == t1)
        p=p+10;
    else if (t2>t1 && a2>a1)
        p=p+10;
    else if (t1>t2 && a1>a2)
        p=p+10;

    return p;
}

