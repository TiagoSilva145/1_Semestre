#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define T 6

typedef struct funcionario
{
    int  mat,
         sup;
    char nome[51];
} Funcionario;

int indice_funcionario (Funcionario *v, int tam, int mat)
{
    int i;

    for(i=0; i<tam; i++)
        if(v[i].mat == mat)
            return i;

    return -1;
}

Funcionario* determina_subordinado (Funcionario **v, int tam, int mat)
{
    int i, cont=0;
    Funcionario *aux;

    aux = (Funcionario *) malloc(tam * sizeof(Funcionario));

    for(i=0; i<tam; i++)
        if((*v[i]).sup == mat)
        {
            aux[cont] = *v[i];
            cont++;
        }

    realloc(aux, cont * sizeof(Funcionario));

    return aux;
}

void preenche_ficha (Funcionario *v, int tam)
{
    int i;

    for (i=0; i<tam; i++)
    {
        printf("Digite o nome, numero de matricula e numero de supervidor: ");
        scanf ("%s %d %d", &v[i].nome, &v[i].mat, &v[i].sup);
    }
}

void imprime_ficha (Funcionario *v, int tam)
{
    int i;

    for (i=0; i<tam; i++)
    {
        printf("Nome: %s\nMat: %d Sup: %d\n", v[i].nome, v[i].mat, v[i].sup);
    }
}

int main ()
{
    Funcionario f[T], *v[T], *sub;
    int i;

    preenche_ficha(f,T);
    system("cls");

    for(i=0; i<T; i++)
        v[i] = &f[i];

    printf("Indice do funcionario com mat = 126: %d\n", indice_funcionario(f,T,126));

    sub = determina_subordinado(v,T,126);
    imprime_ficha(sub, 2);

    return 0;
}
