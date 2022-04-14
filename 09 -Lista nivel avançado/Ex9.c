#include <stdio.h>

int main ()
{
    int c1,s1=0,s2=0;

    for(c1=1;c1<=100;c1++)
    {
        s1=s1+(c1*c1);
        s2=s2+c1;
    }

    s2=s2*s2;

    printf("A diferenca entre o quadrado da soma e a soma dos quadrados do primeiros cem numeros naturais eh:\n");
    printf("%d - %d = %d", s2,s1,s2-s1);



return 0;
}

