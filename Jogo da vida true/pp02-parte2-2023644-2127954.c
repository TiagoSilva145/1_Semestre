#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define Q 28 // Q = ordem das matrizes;

//Os arquivos de texto usados para a implementação das matrizes foram tirados de:
// http://www.radicaleye.com/lifepage/picgloss/picgloss.html

//Vídeo usado para aprender sobre leitura de arquivo de texto em string:
// https://www.youtube.com/watch?v=9KVqEpiKxTY

void preenche_matriz (int M[][Q], FILE *texto)
{
    int i=0, j;
    char v[Q];

    while(fgets(v,Q,texto))  //O fgets só lê uma linha e deixa o vetor com: 'primeira_linha''\n''\0';
    {
        v[strlen(v)] = '\0'; //Tira o '\n';

        for(j=0; j != strlen(v); j++) //Preenche a linha "i" da matriz com os elementos do vetor até o '\0';
        {
            if(v[j] == '*')
                M[i+2][j+2] = 1;      //Optei por não preencher as linhas e colunas das extremidades para não invadir memória na hora de analisar memória não alocada;
            else
                M[i+2][j+2] = 0;
        }
        i++;                //Incrementa a variável que pula linha;
    }
}

void imprime_matriz (int M[][Q], int l, int c) //Imprime ' ' caso a celula esteja morta (0) e '#' caso esteja viva (1);
{
    int i,j;

    printf("Matriz :\n");

    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            if(M[i][j])
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int conta (int M[][Q], int l, int c, int i, int j) //Retorna o numero de celulas vivas ao redor no elemento M[i][j];
{
    int cont=0, u, v;

    for(u=-1; u<2; u++)      //Verifica quantos '1' (células vivas) têm ao redor da célula analisada,
        for(v=-1; v<2; v++)  //porém também contará o '1' da célula caso ela esteja viva;
            if(M[i+v][j+u])
                cont++;
    if(M[i][j])              //Caso a célula em questão esteja viva, decrementa a contadora;
        cont--;

    return cont;
}

void muda (int M[][Q], int valor, int cont, int i, int j) //Muda, na matriz auxiliar, o elemento M[i][j] com base no seu valor (valor) e no numero de celulas vivas ao redor dele (cont);
{
    if (valor) //Celula viva;
    {
        if (cont != 3 && cont != 2)
            M[i][j] = 0;
        else
            M[i][j] = 1;
    }
    else       //Celula morta;
        if (cont == 3)
            M[i][j] = 1;
}

void copia_matriz(int A[][Q], int B[][Q], int l, int c) //Copia a matriz B na matriz A;
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            A[i][j] = B[i][j];
}

int main ()
{
    int M[Q][Q]={0},N[Q][Q]={0}, rep, i, j, cont, a;
    FILE *texto;
    //M = matriz a ser analisada, N = matriz auxiliar
    //cont = representa o numero de celulas vivas ao redor da celula analisada;
    // *texto: variavel para abrir o arquivo de texto para inicializar a matriz;

    printf("Selecione a inicialização da matriz:\n1)Barco\n2)Loaf\n3)Blinker\n4)Sapo\n5)Glider\n6)Lighweight spaceship\n7)Pulsar\n8)101\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        texto = fopen("barco.txt", "r");
        break;
    case 2:
        texto = fopen("loaf.txt", "r");
        break;
    case 3:
        texto = fopen("blinker.txt", "r");
        break;
    case 4:
        texto = fopen("sapo.txt", "r");
        break;
    case 5:
        texto = fopen("glider.txt", "r");
        break;
    case 6:
        texto = fopen("lwss.txt", "r");
        break;
    case 7:
        texto = fopen("pulsar.txt", "r");
        break;
    case 8:
        texto = fopen("101.txt", "r");
        break;
    default:
        break;
    }

    preenche_matriz(M,texto);
    fclose(texto);

    for(rep = 0; rep<60; rep++)
    {
        imprime_matriz(M,Q,Q);

        for(i=1; i<(Q-1); i++)                //Usa-se de 1 a Q-1 para não considerar as bordas da matriz para não invadir memória;
            for(j=1; j<(Q-1); j++)
            {
                cont = conta(M,Q,Q,i,j);
                muda(N,M[i][j],cont,i,j);
            }

        copia_matriz(M,N,Q,Q);               //Copia a matriz auxiliar N na matriz M;

        _sleep(250);
        system("cls");
    }
}

