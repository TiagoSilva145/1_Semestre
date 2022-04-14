#include <math.h>
#include <stdio.h>

int main ()
{
    float a,b,c,aux;

    printf("Por favor, digite os valores correspondentes aos lados do triangulo, separando-os por enter:\n");
    scanf ("%f%f%f", &a,&b,&c);


    if (a<=b && a<=c && b<=c)
    {
        aux = a;
        a = c;
        b = b;
        c = aux;
    }
    else if (a<=b && a<=c && c<=b)
    {
        aux = a;
        a = b;
        b = c;
        c = aux;
    }
    else if (b<=a && b<=c && a<=c)
    {
        aux = b;
        b = a;
        a = c;
        c = aux;
    }
    else if (b<=a && b<=c && c<=a)
    {
        aux = b;
        b = c;
        c = aux;
    }
    else if (c<=b && c<=a && a<=b)
    {
        aux = b;
        b = a;
        a = aux;
    }
    printf("Os valores, em ordem decrescente sao: %.3f, %.3f e %.3f.\n", a,b,c);

    if (a >= b+c)
    {
        printf("Esses valores nao formam um triangulo.\n");
        return 0;
    }
    else if (pow(a,2) == pow(b,2) + pow(c,2))
    {
        printf("Esses valores formam um triangulo retangulo e");
    }
    else if (pow(a,2) > pow(b,2) + pow(c,2))
    {
        printf("Esses valores formam um triangulo obtusangulo e");
    }
    else if (pow(a,2) < pow(b,2) + pow(c,2))
    {
        printf("Esses valores formam um triangulo actuangulo e");
    }

    if (a == b && a == c && b == c)
    {
        printf(" equilatero, e por consequencia isoceles.\n");
    }
    else if (a == b || a == c || b == c)
    {
        printf(" isoceles.\n");
    }
    else
    {
        printf(" escaleno.\n");
    }


return 0;
}

