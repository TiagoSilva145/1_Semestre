#include <stdio.h>

int main ()
{
    char mensagem[100];
    int i,j,q;

    printf("Digite o tamanho da mensagem: ");
    scanf ("%d", &q);
    printf("Digite a mensagem: ");
    scanf ("%s", mensagem);

    for(i=0; i<q; i++)
    {
        printf("\n");
        for(j=0; j<q; j++)
            printf("%c ", mensagem[i*q + j]);
    }

    return 0;
}
