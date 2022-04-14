#include <math.h>
#include <stdio.h>

int main ()
{
    int n,m,c1,c2;

    printf("Por favor, digite o numero de linhas e colunas da tabela: ");
    scanf ("%d%d", &n,&m);

    for (c1=1;c1<=n;c1++)
    {
        for(c2=1;c2<=m;c2++)
            printf("%d ",c2*c1);
        printf("\n");
    }


return 0;
}
