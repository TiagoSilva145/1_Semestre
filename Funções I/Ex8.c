#include <stdio.h>

int retornaresto (int alexandre, int maria, int rafael)
{
    return ((alexandre+maria+rafael)%3);
}

void vencedor (int r)
{
    if (r==0)
        printf("Alexandre.");
    else if (r==1)
        printf("Maria.");
    else
        printf("Rafael.");
}

int main()
{
    int v1,v2,v3;

    printf("Digite os valores escolhidos pelos jogadores: ");
    scanf ("%d%d%d", &v1,&v2,&v3);

    printf("O vencedor eh: ");
    vencedor (retornaresto(v1,v2,v3));
}
