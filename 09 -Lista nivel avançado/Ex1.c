#include <math.h>
#include <stdio.h>

int main ()
{
    int n,c1=1,a,b,c,i=0; //c1=contadora

    printf("Por favor, digite a quantidade de numeros na sequencia: ");
    scanf ("%d", &n);

    printf("Digite o %do numero: ", c1);
    scanf ("%d", &a);
    c1++;

    printf("Digite o %do numero: ", c1);
    scanf ("%d", &b);
    c1++;

    if(a==b)
        i++;

    while(c1<=n) //assumindo sequencia de tres ou mais numeros.
    {
        printf("Digite o %do numero: ", c1);
        scanf ("%d", &c);
        c1++;

        if(c==b && c!=a)
            i++;

        a=b;
        b=c;
    }

    printf("Essa sequencia eh formada por %d segmentos de numeros iguais.", i);


return 0;
}

