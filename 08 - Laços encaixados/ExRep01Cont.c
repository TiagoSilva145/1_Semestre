#include <stdio.h>

int main (){

    int n1,n2,c,d=0;

    for(c=1;c<=10;c++)
    {
        printf("Por favor digite n1 e n2: ");
        scanf ("%d%d", &n1,&n2);

        if (n1 == n2)
            printf("Valores iguais.\n");
        else
        {
            d = 1;
        }
    }

    if (d == 1)
        printf("Foram digitados numeros diferentes ao menos uma vez.");

}
