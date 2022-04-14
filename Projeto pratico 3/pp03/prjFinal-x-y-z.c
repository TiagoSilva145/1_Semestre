#include <stdlib.h>
#include <math.h>

#include "imagem.h"
#include "trabalho3.h"

#define TAM_JANELA 7 // Tamanho da janela a ser considerado na filtragem
#define TOLERANCIA 5 // Intervalo de tolerancia para se considerar dois pixels entre o fundo e a imagem original iguais

/* ----- FUNÇÃO PRINCIPAL ----- */

int contaVeiculos (Imagem* img, Imagem* bg, int contagem [N_TIPOS_DE_VEICULOS])
{
    int i, j; // i = linha, j = coluna;
    int **canal; // matriz para representar o primeiro canal da imagem
    int n_detectados; // quantidade de veículos detectados na tela
    Imagem* img2; // auxiliar para filtragem da imagem original
    Imagem* bg2; // auxiliar para a filtragem do fundo

    img2 = criaImagem(img->largura,img->altura,3);
    bg2 = criaImagem(img->largura,img->altura,3);

    filtroMedia(img, img2, TAM_JANELA);
    filtroMedia(bg, bg2, TAM_JANELA);

    limiarizaImagem(img, img2, bg2, TOLERANCIA, TAM_JANELA);
    //Apos a limiarização o algoritmo passa a trabalhar somente com o primeiro canal da imagem

    destroiImagem(img2);
    destroiImagem(bg2);

    filtroArredores(img);

    //Aloca matriz
    canal = (int **) calloc(img->altura, sizeof(int *));
    for(i = 0; i < img->altura; i++)
        canal[i] = (int *) calloc(img->largura, sizeof(int));

    //Copia o canal 0 para a matriz
    for(i = 0; i < img->altura; i++)
        for (j = 0; j < img->largura; j++)
            canal[i][j] = img->dados[0][i][j] / 255;

    // Zera o vetor de contagem de veiculos;
    for(i=0; i<N_TIPOS_DE_VEICULOS; i++)
        contagem[i] = 0;

    n_detectados = conta_e_rotula (canal, img->altura, img->largura, contagem);

    //Libera matriz
    for (i = 0; i < img->altura; i++)
        free(canal[i]);
    free(canal);

    return n_detectados;
}

/* ----- FUNÇÕES AUXILIARES PRINCIPAIS ----- */


/*----------------------------------------------------------------------------*/
/** Filtra a imagem fazendo a media de cada pixel com sua respectiva vizinhança.
 *
 * Parametros: Imagem* img: imagem de entrada para a filtragem.
 *              Imagem* filt: imagem de saída filtrada.
 *              int winSize: tamanho da janela usada para obter a vizinhança
 *
 * Valor de retorno: retorna por referência filt, imagem filtrada. */
void filtroMedia(Imagem* img, Imagem* filt, int winSize)
{   //Filtra a imagem fazendo a media de cada pixel com sua respectiva vizinhança

	int i, j, k; // variaveis linha, coluna e canal;
	int x, y; //variaveis linha e coluna auxiliares para o tamanho da janela;
	int soma; //soma a vizinhança de pixels para fazer a media
	int mid; //variavel referente � metade do tamanho da janela;

	mid = winSize/2;

    //Desconsidera a borda;
    for (i = (mid + 1); i < (img->altura - mid); i++)
        for (j = (mid + 1); j < (img->largura - mid); j++)
            for (k = 0; k < 3; k++)
            {
                soma = 0;
                for(x= - mid; x<= mid; x++)
                    for(y=-mid; y<= mid; y++)
                        soma += img->dados[k][i+x][j+y];

                soma /= (winSize*winSize);
                filt->dados[k][i][j] = soma;

            }

    //Zera a borda;
    for (i = 0; i < (mid + 1); i++)
        for (j = 0; j < img->largura; j++)
            filt->dados[0][i][j] = 0;

    for (i = (mid + 1); i < img->altura; i++)
        for (j = 0; j < (mid + 1); j++)
            filt->dados[0][i][j] = 0;

    for (i = (img->altura - (mid + 1)); i < img->altura; i++)
        for (j = (mid + 1); j < img->largura; j++)
            filt->dados[0][i][j] = 0;

    for (i = (mid + 1); i < (img->altura - (mid + 1)); i++)
        for (j = (img->largura - (mid + 1)); j < img->largura; j++)
            filt->dados[0][i][j] = 0;
}

/*----------------------------------------------------------------------------*/
/** Binariza a imagem.
 *
 * Parametros: Imagem* img: imagem de saída a ser modificada.
 *              Imagem* img_filtrada: imagem de entrada anteriormente filtrada a ser comparada com o fundo.
 *              Imagem* bg: imagem do fundo.
 *              int tolerancia: tolerância para considerar dois pixels iguais
 *              int winSize: tamanho da janela utilizada para filtragem. Define o tamanho da borda
 *
 * Valor de retorno: retorna por referência img binarizado. */
void limiarizaImagem (Imagem* img, Imagem* img_filtrada, Imagem* bg, int tolerancia, int winSize)
{

    int i, j, k; // i = linha, j = coluna, k = canal;
    int ind;     // indicadora de canais iguais;
    int mid = winSize / 2;

    for (i = (mid + 1); i < (img->altura - mid); i++)
        for (j = (mid + 1); j < (img->largura - mid); j++)
        {
            //Conta canais que são iguais de acordo com o intervalo de tolerância definido anteriormente
            ind = 0;
            for(k=0; k<3; k++)
            {
                if(img_filtrada->dados[k][i][j] < bg->dados[k][i][j] && bg->dados[k][i][j] - img_filtrada->dados[k][i][j] < tolerancia)
                    ind++;
                else if (img_filtrada->dados[k][i][j] > bg->dados[k][i][j] && img_filtrada->dados[k][i][j] - bg->dados[k][i][j] < tolerancia)
                    ind++;
            }

            //Se dois canais ou mais forem iguais considera o pixel pertencente ao fundo
            if (ind > 1)
                img->dados[0][i][j] = img->dados[1][i][j] = img->dados[2][i][j] = 0;
            //Caso contrário considera o pixel como um objeto não pertencente ao fundo
            else
                img->dados[0][i][j] = img->dados[1][i][j] = img->dados[2][i][j] = 255;
        }

}

/*----------------------------------------------------------------------------*/
/** A partir de uma imagem já binarizada muda o valor do pixel se os pixels adjacentes (horizontal e vertical) forem diferentes.
 *
 * Parametros: Imagem* img: a imagem a ser filtrada.
 *
 * Valor de retorno: retorna img por referência. */
void filtroArredores (Imagem* img)
{

    int i, j;

    //Verifica as posicoes verticais da vizinhança do pixel
    for (i = 1; i < (img->altura - 1); i++)
        for (j = 0; j < img->largura; j++)
            if ( (img->dados[0][i][j] != img->dados[0][i+1][j]) && (img->dados[0][i][j] != img->dados[0][i-1][j]) )
                img->dados[0][i][j] = img->dados[0][i+1][j];

    //Verifica as posicoes horizontais da vizinhança do pixel
    for (i = 0; i < img->altura; i++)
        for (j = 1; j < (img->largura - 1); j++)
            if ( (img->dados[0][i][j] != img->dados[0][i][j+1]) && (img->dados[0][i][j] != img->dados[0][i][j-1]) )
                img->dados[0][i][j] = img->dados[0][i][j+1];

}

/*----------------------------------------------------------------------------*/
/** Rotula os objetos na imagem e conta a quantidade de coda tipo de veículo.
 *
 * Parametros: int **img: matriz do primeiro canal de dados de uma imagem binarizada.
 *              int l: largura da matriz.
 *              int c: altura da matriz.
 *              int *veiculos: vetor correspondente a quantidade de cada tipo de veículo.
 *
 * Valor de retorno: retorna por referência o vetor de veículos com
 *                   as quantidades de cada veículo correspondentes. */
int conta_e_rotula (int **img, int l, int c, int *veiculos)
{
    int r;    // variavel utilizada para a rotulacao da imagem no processo multi-pass;

    r = rotula_componentes(img, l, c);

    // Repete o processo milti-pass até que os componentes da imagem estejam devidamente rotulados;
    do
    {
        // Faz o forward scan;
        fors(img, l, c);

        if (verifica(img, l, c))
            break;

        // Faz o backward scan;
        bacs(img, l, c);

    } while (verifica(img, l, c) == 0);

    return conta_diferentes(img, l, c, r, veiculos);
}

/* ----- FUNÇÕES SECUNDÁRIAS DA CONTA_E_ROTULA */

/** Prepara a imagem binarizada para o processo multi-pass, atribuindo valores para os componentes conexos.
 *
 * Parametros: int **img: matriz do primeiro canal de dados de uma imagem binarizada.
 *              int l: largura da matriz.
 *              int c: altura da matriz.
 *
 * Valor de retorno: retorna por referência a matriz img rotulada
 *                   retorna por valor o r, que representa o maior rótulo atribuído a um objeto. */
int rotula_componentes (int** img, int l, int c)
{
    int i, j, v;     // i = linha, j = coluna, v = vizinhança;
    int aux, r = 1;

    // Varre a matriz inteira, desconsiderando as bordas;
    for(i=1; i< l-1; i++)
        for (j=1; j < c-1; j++)
        {
            // Só faz os testes se o pixel analisado tiver valor diferente de 0;
            if(img[i][j])
            {
                // O auxiliar recebe o valor a esquerda do pixel analisado;
                aux = img[i][j-1];

                // Analisa a linha de cima do pixel analisado para buscar o menor valor diferente de zero e guardar no auxiliar;
                for(v=-1; v<2; v++)
                {
                    if (aux == 0)
                        aux = img[i-1][j+v];

                    else if (img[i-1][j+v] < aux && img[i-1][j+v] != 0)
                        aux = img[i-1][j+v];
                }

                // Se todos os valores forem 0, aplica o rótulo r e o incrementa;
                if (aux == 0)
                    img[i][j] = r++;
                // Caso contrário, aplica o valor do auxiliar;
                else
                    img[i][j] = aux;
            }
        }

    return r;
}

/** Faz o forward scan na matriz do primeiro canal de dados da imagem binarizada.
 *
 * Parametros: int **img: matriz do primeiro canal de dados de uma imagem binarizada.
 *              int l: largura da matriz.
 *              int c: altura da matriz.
 *
 * Valor de retorno: retorna por referência a matriz img rotulada. */
void fors (int** img, int l, int c)
{
    int i, j, v;     // i = linha, j = coluna, v = vizinhança;
    int aux;

    // Varre a matriz inteira, desconsiderando as bordas;
    for(i=1; i< l-1; i++)
        for (j=1; j < c-1; j++)
        {
            // Só faz os testes se o pixel analisado tiver valor diferente de 0;
            if(img[i][j])
            {
                // O auxiliar recebe o valor a esquerda do pixel analisado;
                aux = img[i][j-1];

                // Analisa a linha de cima do pixel analisado para buscar o menor valor diferente de zero e guardar no auxiliar;
                for(v=-1; v<2; v++)
                {
                    if (aux == 0)
                        aux = img[i-1][j+v];

                    else if (img[i-1][j+v] < aux && img[i-1][j+v] != 0)
                        aux = img[i-1][j+v];
                }

                // Muda o valor do pixel analisado para o valor do auxiliar caso este seja diferente de 0;
                if (aux)
                    img[i][j] = aux;
            }
        }
}

/** Faz o backward scan na matriz do primeiro canal de dados da imagem binarizada.
 *
 * Parametros: int **img: matriz do primeiro canal de dados de uma imagem binarizada.
 *              int l: largura da matriz.
 *              int c: altura da matriz.
 *
 * Valor de retorno: retorna por referência a matriz img rotulada. */
void bacs (int** img, int l, int c)
{
    int i, j, v;     // i = linha, j = coluna, v = vizinhança;
    int aux;

    // Varre a matriz inteira, desconsiderando as bordas;
    for(i= l-2; i>0; i--)
        for (j=c-2; j>0; j--)
        {
            // Só faz os testes se o pixel analisado tiver valor diferente de 0;
            if(img[i][j])
            {
                // O auxiliar recebe o valor a direita do pixel analisado;
                aux = img[i][j+1];

                // Analisa a linha de baixo do pixel analisado para buscar o menor valor diferente de zero e guardar no auxiliar;
                for(v=-1; v<2; v++)
                {
                    if (aux == 0)
                        aux = img[i+1][j+v];

                    else if (img[i+1][j+v] < aux && img[i+1][j+v] != 0)
                        aux = img[i+1][j+v];
                }

                // Muda o valor do pixel analisado para o valor do auxiliar caso este seja diferente de 0;
                if (aux)
                    img[i][j] = aux;
            }
        }
}

/** Verifica se todos os pixels de todos os componentes conexos da imagem estao com o mesmo rotulo.
 *
 * Parametros: int **img: matriz do primeiro canal de dados de uma imagem binarizada.
 *              int l: largura da matriz.
 *              int c: altura da matriz.
 *
 * Valor de retorno: retorna 1 caso o teste seja verdadeiro, e 0 caso contrario.*/
int verifica (int** img, int l, int c)
{
    int i, j; // i = linha, j = coluna;

    // Varre a matriz inteira, desconsiderando as bordas;
    for(i=1; i < l-1; i++)
        for (j=1; j < c-1; j++)
        {
            // Retorna 0 caso o valor da direita ou o valor de baixo do pixel analisado seja diferente de 0 e diferente do pixel analisado;
            if(img[i][j])
            {
                if (img[i][j+1] && img[i][j+1] != img[i][j])
                    return 0;

                if (img[i+1][j] && img[i+1][j] != img[i][j])
                    return 0;
            }
        }

    // Caso a funcao chegue ate aqui quer dizer que todos os componentes conexos da imagem tem pixels com o mesmo rotulo;
    return 1;
}

/** Conta quantos veiculos de cada tipo tem na imagem, baseado na area de cada componente conexo;
 *
 * Parametros: int **img: matriz do primeiro canal de dados de uma imagem binarizada, ja rotulada com o metodo multi pass.
 *              int l: largura da matriz.
 *              int c: altura da matriz.
 *              int r: maior rotulo atribuido a um pixel da imagem.
 *              int *veiculos: vetor que armazena a quantidade de cada tipo de veiculo na imagem.
 *
 * Valor de retorno: retorna por referencia o vetor veiculos preenchido
*                    retorna por valor a quantidade total de veiculos na imagem*/
int conta_diferentes (int** img, int l, int c, int r, int *veiculos)
{
    int i, j; // i = linha, j = coluna;
    int *a;   // ponteiro para alocar vetor;
    int cont = 0; // contadora para o numero de veiculos na imagem;
    int a1 = 25500, a2 = 7000, a3 = 2000, a4 = 1000; // variaveis que delimitam os intervalos das possiveis areas de cada tipo de veiculo;

    // Aloca um vetor de tamanho r+1, usado para guardar as areas dos componentes conexos;
    a = (int *) calloc(r+1, sizeof(int));

    // Incrementa a posicao a[x] do vetor para cada pixel rotulado com o valor "x", caracterizando a area do componente conexo;
    for(i=0; i< l; i++)
        for (j=0; j < c; j++)
                (a[img[i][j]])++;

    // Varre o vetor area comecando da posicao 1, pois a posicao 0 corresponde a area do fundo;
    for(i=1; i<(r+1); i++)
    {
        // Se a area do componente "i" for maior que a1, e caracterizado como longo2, incrementando a posicao 3 do vetor veiculos;
        if(a[i] >= a1)
        {
            (veiculos[3])++;
        }

        // Se a area do componente "i" for maior que a2, e caracterizado como longo, incrementando a posicao 2 do vetor veiculos;
        else if (a[i] >= a2)
        {
            (veiculos[2])++;
        }

        // Se a area do componente "i" for maior que a3, e caracterizado como medio, incrementando a posicao 1 do vetor veiculos;
        else if (a[i] >= a3)
        {
            (veiculos[1])++;
        }

        // Se a area do componente "i" for maior que a4, e caracterizado como moto, incrementando a posicao 0 do vetor veiculos;
        else if (a[i] >= a4)
        {
            (veiculos[0])++;
        }
    }

    // Conta a quantidade total de veiculos na imagem;
    for(i=0; i<4; i++)
        cont += veiculos[i];

    // Desaloca o vetor area;
    free(a);

    return cont;
}


