#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define T 5000

typedef struct placa
{
    int num;
    char let[3];
} Placa;

typedef struct carro
{
    char prp[20], mod[20], comb[8], cor[20];
    int chas, ano;
    Placa pl;
} Carro;

Carro* preenche_carro ()
{
    int i=0;
    Carro *v;

    v = (Carro *) malloc(T * sizeof(Carro));

    printf("Digite os dados do carro: proprietario, modelo, combustivel, cor, chassi, ano, placa: ");
    gets(v[i].prp);

    while(strlen(v[i].prp) != 0)
    {
        scanf("%s %s %s %d %d %s %d", &v[i].mod, &v[i].comb, &v[i].cor, &v[i].chas, &v[i].ano, &v[i].pl.let, &v[i++].pl.num);
        printf("Digite os dados do proximo carro: ");
        gets(v[i].prp);
    }

    realloc(v, sizeof(Carro) * i);

    return v;
}

int main ()
{
    Carro *f;

    f = preenche_carro();














}
