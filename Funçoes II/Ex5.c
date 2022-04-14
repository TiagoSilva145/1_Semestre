#include <stdio.h>

int troca (int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}
int segmento (int a, int b)
{
    int aux,i=0; // da = digito a e db = digito b;

    if (a<b)
    {
        i=1;
        troca (&a,&b);
    }
    else
        i=2;

    if(igualadigitos (&a,&b)==0)
        return 0;

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

int igualadigitos (int *a, int *b)
{
    int i=0,da,db;

    db=*b%10;

    while(*a>0)
    {
        da=*a%10;
        if (db==da)
        {
            i=1;
            break;
        }
        *a=*a/10;
    }

    return i;
}

int main ()
{
    printf("%d", segmento (2212435,1243));

















}
