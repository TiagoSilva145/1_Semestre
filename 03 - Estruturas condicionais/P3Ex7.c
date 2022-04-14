#include <math.h>
#include <stdio.h>

int main ()
{
    int a,b,c;

    printf("Por favor, escreva tres valores inteiros distintos, separando-os por enter:\n");
    scanf ("%d%d%d", &a,&b,&c);

    if (a<b && a<c && b<c)
    {
        printf("Os valores em ordem crescente sao %d, %d e %d", a,b,c);
    }
    if(a<b && a<c && c<b)
    {
        printf("Os valores em ordem crescente sao %d, %d e %d", a,c,b);
    }
    if(b<a && b<c && a<c)
    {
        printf("Os valores em ordem crescente sao %d, %d e %d", b,a,c);
    }
    if(b<a && b<c && c<a)
    {
        printf("Os valores em ordem crescente sao %d, %d e %d", b,c,a);
    }
    if(c<a && c<b && b<a)
    {
        printf("Os valores em ordem crescente sao %d, %d e %d", c,b,a);
    }
    if(c<a && c<b && a<b)
    {
        printf("Os valores em ordem crescente sao %d, %d e %d", c,a,b);
    }


return 0;
}

