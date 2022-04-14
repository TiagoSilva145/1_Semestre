#include <stdio.h>
int main ()
{
    int n1,n2,c,n;

    printf("Por favor, digite o numero de vezes que deseja realizar a comparacao: ");
    scanf ("%d", &n);

    for (c=1;c<=n;c++)
    {
        printf("Digite os valores de n1 e n2: ");
        scanf ("%d%d", &n1,&n2);

        if (n1==n2)
            printf("Os valores sao iguais.\n");
    }

}

