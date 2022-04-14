#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define Q 28 // Q = ordem das matrizes;

void seleciona_tipo (int M[][Q]) //Pede ao usuario o tipo da matriz e a preenche;
{
    int a;
    char b;

    printf("Selecione o tipo de inicializacao da matriz:\n\n1) Vidas paradas\n2) Osciladores\n3) Naves espaciais\n");
    scanf ("%d", &a);
    getchar();

    switch (a)
    {
    case 1:
        printf("Selecione o tipo de inicializacao da matriz:\n\na) Vida eterna 1\n\nb) Vida eterna 2\n");
        scanf("%c", &b);
        system("cls");
        switch (b)
        {
        case 'a':
            vida_eterna_1(M,Q,Q);
            break;
        case 'b':
            vida_eterna_2(M,Q,Q);
            break;
        default:
            break;
        }
        break;
    case 2:
        printf("Selecione o tipo de inicializacao da matriz:\n\na) Blinker\n\nb) Sapo\n");
        scanf("%c", &b);
        switch (b)
        {
        case 'a':
            blinker(M,Q,Q);
            break;
        case 'b':
            sapo(M,Q,Q);
            break;
        default:
            break;
        }
        break;
    case 3:
        printf("Selecione o tipo de inicializacao da matriz:\n\na) Glider \n\nb) Lightweight spaceship\n");
        scanf("%c", &b);
        switch (b)
        {
        case 'a':
            glider(M,Q,Q);
            break;
        case 'b':
            lightweight_spaceship(M,Q,Q);
            break;
        }
        break;
    default:
        break;
    }
}

void copia_matriz(int A[][Q], int B[][Q], int l, int c) //Copia a matriz B na matriz A;
{
    int i,j;

    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            A[i][j] = B[i][j];
}

void imprime_matriz (int M[][Q], int l, int c) //Imprime '|' caso a celula esteja morta (0) e '#' caso esteja viva (1);
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
                printf("| ");
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

void vida_eterna_1 (int M[][Q], int l, int c)
{
    M[Q/2 + 1][Q/2] = 1;
    M[Q/2 - 1][Q/2] = 1;
    M[Q/2 - 1][Q/2 - 1] = 1;
    M[Q/2][Q/2 + 1] = 1;
    M[Q/2][Q/2 - 1] = 1;
}

void vida_eterna_2 (int M[][Q], int l, int c)
{
    M[Q/2 + 1][Q/2] = 1;
    M[Q/2 - 1][Q/2] = 1;
    M[Q/2][Q/2 + 1] = 1;
    M[Q/2][Q/2 - 1] = 1;
}

void blinker (int M[][Q], int l, int c)
{
    M[Q/2][Q/2 + 1] = 1;
    M[Q/2][Q/2 - 1] = 1;
    M[Q/2][Q/2] = 1;
}

void sapo (int M[][Q], int l, int c)
{
    M[Q/2][Q/2] = 1;
    M[Q/2][Q/2 -1] = 1;
    M[Q/2 -1][Q/2] = 1;
    M[Q/2][Q/2 +1] = 1;
    M[Q/2 -1][Q/2 +1] = 1;
    M[Q/2 -1][Q/2 +2] = 1;
}

void glider (int M[][Q], int l, int c)
{
    M[1][2] = 1;
    M[2][3] = 1;
    M[3][1] = 1;
    M[3][2] = 1;
    M[3][3] = 1;
}

void lightweight_spaceship (int M[][Q], int l, int c)
{
    M[1][3] = 1;
    M[1][4] = 1;
    M[2][2] = 1;
    M[2][3] = 1;
    M[2][4] = 1;
    M[2][5] = 1;
    M[3][2] = 1;
    M[3][3] = 1;
    M[3][5] = 1;
    M[3][6] = 1;
    M[4][4] = 1;
    M[4][5] = 1;
}

int main ()
{
    int M[Q][Q]={0},N[Q][Q]={0}, rep, i, j, cont;
    //M = matriz a ser analisada, N = matriz auxiliar
    //cont = representa o numero de celulas vivas ao redor da celula analisada;

    seleciona_tipo(M);

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
