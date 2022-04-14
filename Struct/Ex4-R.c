#include <stdio.h>
#include <time.h>

typedef struct loja
{
    char cod[8];
    int  pre;
    int  tel[8];
} Loja;

void preenche_loja (Loja* v, int t)
{
    int i,j;

    for(i=0; i<t; i++)
    {
        for(j=0; j<8; j++)
        {
            v[i].cod[j] = (rand()%26) + 65;
            v[i].tel[j] = rand()%10;
        }
        v[i].pre = rand()%1500 + 2000;
    }

}

void imprime_loja (Loja* v, int t)
{
    int i,j;

    for(i=0; i<t; i++)
    {
        printf("----Loja %d----", i+1);

        printf("\nTelefone: ");
        for(j=0; j<8; j++)
            printf("%d", v[i].tel[j]);

        printf("\nCodigo: ");
        for(j=0; j<8; j++)
            printf("%c", v[i].cod[j]);

        printf("\nPreco: R$%d,99\n\n", v[i].pre);
    }
}

float calcula_media (Loja* v, int t)
{
    int i;
    float m=0;

    for(i=0; i<t; i++)
        m += v[i].pre;

    m /= t;

    return m;
}

int main ()
{
    Loja v[15];
    int i;
    float m;

    srand(time(NULL));

    preenche_loja(v,15);
    imprime_loja(v,15);

    m = calcula_media(v,15);

    printf("----Media: %.2f----\n\n", m);

    printf("----Lojas com preco abaixo da media: ----\n");

    for(i=0; i<15; i++)
        if(m > v[i].pre)
            printf("Loja %d\n", i+1);

}
