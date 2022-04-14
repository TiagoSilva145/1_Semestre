#include <string.h>
#include <stdio.h>

typedef struct aniv
{
    char nome[20];
    int dia;
    int mes;
} Aniv;

void preenche_aniversario (Aniv* v, int t)
{
    int i;

    printf("Digite o nome, o dia e o mes de aniversario das %d pessoas:\n", t);

    for(i=0; i<t; i++)
    {
        printf("%d: ", (i+1));
        scanf("%s %d %d", &v[i].nome, &v[i].dia, &v[i].mes);
    }
}

int main ()
{
    Aniv v[5];
    int i,j,k;

    preenche_aniversario(v,5);

    for(i=1; i<13; i++)
    {
        printf("Mes %d:\n", i);
        for(j=1; j<32; j++)
        {
            for(k=0; k<5; k++)
            {
                if(v[k].dia == j && v[k].mes == i)
                    printf("%s, %02d/%02d\n", v[k].nome, v[k].dia, v[k].mes);
            }
        }
    }
















}
