#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define T 15

typedef struct loja
{
    int cod[9],
        tel[8],
        pre;
} Loja;

void preenche_vetor_aleatorio (int *v, int tam)
{
    int i;

    for(i=0; i<tam; i++)
        v[i] = rand() % 10;
}

void imprime_vetor (int *v, int tam)
{
    int i;

    for(i=0; i<tam; i++)
        printf("%d", v[i]);
}

void registra_loja_aleatoria (Loja *v, int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        preenche_vetor_aleatorio(v[i].cod,9);
        preenche_vetor_aleatorio(v[i].tel,8);
        v[i].pre = rand() % 1000 + 500;
    }
}

void imprime_loja (Loja *v, int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("Loja %d\n", i+1);
        printf("Codigo:   ");
        imprime_vetor(v[i].cod,9);

        printf("\nTelefone: ");
        imprime_vetor(v[i].tel,8);

        printf("\nPreco:    %d\n\n", v[i].pre);
    }
}

float calcula_media (Loja *v, int tam)
{
    int i;
    float media = 0;

    for(i=0; i<T; i++)
    {
        media += v[i].pre;
    }

    return (media/i);
}

int main ()
{
    Loja l[T];
    int i;
    float media = 0;

    srand(time(NULL));

    registra_loja_aleatoria(l,T);
    imprime_loja(l,T);

    media = calcula_media(l,T);

    printf("A media dos precos eh: %.2f", media);

    printf("\n\nOs telefones das lojas com preco abaixo da media sao:\n");

    for(i=0; i<T; i++)
        if (l[i].pre < media)
        {
            printf("Loja %d: ", i+1);
            imprime_vetor(l[i].tel,8);
            printf("\n");
        }














}
