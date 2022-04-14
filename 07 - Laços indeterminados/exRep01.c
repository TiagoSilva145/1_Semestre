#include <stdio.h>
int main ()
{
    int n1,n2,c;

    for(c=1;c<=10;c++)
    {
        printf("Digite os valores de n1 e n2: ");
        scanf ("%d%d", &n1,&n2);

        if (n1==n2)
            printf("Os valores sao iguais.\n");
    }

}
