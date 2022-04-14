#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define T 5

typedef struct Aniversario
{
    char nome[20];
    int dia, mes;
} Aniversario;

Aniversario registra_aniversario ()
{
    Aniversario v;

    printf("Digite o nome: ");
    scanf ("%s", v.nome);

    printf("Digite o dia e o mes de nascimento: ");
    scanf ("%d %d", &v.dia, &v.mes);

    return v;
}

void imprime_registro (Aniversario v)
{
    printf("--%s: %02d\n", v.nome, v.dia);
}

char** matriz_meses ()
{
    char** M;
    int c[12] = {7,9,5,5,4,5,5,6,8,7,8,8},
        i;

    M = (char**) malloc(12 * sizeof(char*));

    for(i=0; i<12; i++)
        M[i] = (char*) calloc((c[i]+1),sizeof(char));

    strcpy(M[0], "Janeiro");
    strcpy(M[1], "Fevereiro");
    strcpy(M[2], "Marco");
    strcpy(M[3], "Abril");
    strcpy(M[4], "Maio");
    strcpy(M[5], "Junho");
    strcpy(M[6], "Julho");
    strcpy(M[7], "Agosto");
    strcpy(M[8], "Setembro");
    strcpy(M[9], "Outubro");
    strcpy(M[10], "Novembro");
    strcpy(M[11], "Dezembro");

    return M;
}

void desaloca_matriz (char** M, int l)
{
    int i;

    for(i=0; i<l; i++)
        free(M[i]);
    free(M);
}

int main ()
{
    Aniversario v[T];
    int i,j,k;
    char **Mes;

    Mes = matriz_meses();

    for (i=0; i<T; i++)
        v[i] = registra_aniversario();

    system("cls");

    for (k=1; k<13; k++)
    {
        printf("\n%s:\n", Mes[(k-1)]);
        for(j=1; j<32; j++)
            for (i=0; i<T; i++)
            {
                if(v[i].mes == k && v[i].dia == j)
                    imprime_registro(v[i]);
            }
    }

    desaloca_matriz(Mes, 12);

    return 0;
}
