#include <stdio.h>
#include <stdlib.h>

#include "projetoImagens.h"

/*----------------------------------------------------------------------------*/
/** Negativo. Considera apenas o primeiro canal da imagem dada.
 *
 * Parâmetros: Imagem* img: imagem a processar. Olhamos somente o 1o canal.
 *             Imagem* out: imagem de saída
 *
 * Valor de retorno: a saída esperada é armazenada em out. */
void negativo(Imagem* img, Imagem* out)
{
    int i, j;

    for (i = 0; i < img->altura; i++)
        for (j = 0; j < img->largura; j++)
            out->dados[0][i][j] = 255 - img->dados[0][i][j];
}

/*----------------------------------------------------------------------------*/
/** Binarização. Considera apenas o primeiro canal da imagem dada.
 *
 * Parâmetros: Imagem* img: imagem a binarizar. Olhamos somente o 1o canal.
 *             Imagem* out: imagem de saída. Processa apenas o 1o canal.
 *             unsigned char threshold: threshold.
 *
 * Valor de retorno: a saída esperada é armazenada em out. */

void binariza (Imagem* img, Imagem* out, unsigned char threshold)
{
	int i, j;

	for (i = 0; i < img->altura; i++)
        for (j = 0; j < img->largura; j++)
        {
            if(img->dados[0][i][j] > threshold)
                out->dados[0][i][j] = 0;
            else
                out->dados[0][i][j] = 255;
        }
}

/** Filtro media. Considera apenas o primeiro canal da imagem dada.
 *
 * Parâmetros: Imagem* img: imagem a filtrar. Olhamos somente o 1o canal.
 *             Imagem* out: imagem de saída. Processa apenas o 1o canal.
 *             int winsize: tamanho da vizinhança a ser analisada.
 *
 * Valor de retorno: a saída esperada é armazenada em out. */

void filtroMedia(Imagem* img, Imagem* out, int winSize)
{
	int i, j, x, y, aux, aux2;

	aux2 = winSize/2;

    for(i=0; i< img->altura; i++)
        for (j=0; j < img->largura; j++)
        {
            if(i <= aux2 || i >= img->altura -aux2 || j <= aux2 || j >= img->largura -aux2)
                out->dados[0][i][j] = img->dados[0][i][j];
            else
            {
                aux = 0;
                for(x= -aux2; x<= aux2; x++)
                    for(y=-aux2; y<= aux2; y++)
                        aux += img->dados[0][i+x][j+y];
                aux /= (winSize*winSize);
                out->dados[0][i][j] = aux;
            }
        }
}

int conta_e_rotula (Imagem* img, Imagem* out, int fundo)
{
    int i, j, r;

    for(i=0; i< img->altura; i++)
        for (j=0; j < img->largura; j++)
        {
            if (img->dados[0][i][j] <= fundo)
                out->dados[0][i][j] = 0;
            else
                out->dados[0][i][j] = 1;
        }

    r = rotula_componentes(out);

    do
    {
        fors(out);

        if (verifica(out))
            break;

        bacs(out);

    } while (verifica(out) == 0);



    return conta_diferentes(out,r);
}

int rotula_componentes (Imagem* img)
{
    int i, j, k, ind, r = 1;

    for(i=1; i< img->altura-1; i++)
        for (j=1; j < img->largura-1; j++)
        {
            if(img->dados[0][i][j])
            {
                ind = img->dados[0][i][j-1];

                for(k=-1; k<2; k++)
                {
                    if (ind == 0)
                        ind = img->dados[0][i-1][j+k];

                    else if (img->dados[0][i-1][j+k] < ind && img->dados[0][i-1][j+k] != 0)
                        ind = img->dados[0][i-1][j+k];
                }

                if (ind == 0)
                    img->dados[0][i][j] = r++;
                else
                    img->dados[0][i][j] = ind;
            }
        }

    return r;
}

void fors (Imagem* img)
{
    int i, j, k, ind;

    for(i=1; i< img->altura-1; i++)
        for (j=1; j < img->largura-1; j++)
        {
            if(img->dados[0][i][j])
            {
                ind = img->dados[0][i][j-1];

                for(k=-1; k<2; k++)
                {
                    if (ind == 0)
                        ind = img->dados[0][i-1][j+k];

                    else if (img->dados[0][i-1][j+k] < ind && img->dados[0][i-1][j+k] != 0)
                        ind = img->dados[0][i-1][j+k];
                }

                if (ind)
                    img->dados[0][i][j] = ind;
            }
        }
}

void bacs (Imagem* img)
{
    int i, j, k, ind;

    for(i= img->altura-2; i>0; i--)
        for (j=img->largura-2; j>0; j--)
        {
            if(img->dados[0][i][j])
            {
                ind = img->dados[0][i][j+1];

                for(k=-1; k<2; k++)
                {
                    if (ind == 0)
                        ind = img->dados[0][i+1][j+k];

                    else if (img->dados[0][i+1][j+k] < ind && img->dados[0][i+1][j+k] != 0)
                        ind = img->dados[0][i+1][j+k];
                }

                if (ind)
                    img->dados[0][i][j] = ind;
            }
        }
}

int verifica (Imagem* img)
{
    int i, j;

    for(i=1; i < img->altura-1; i++)
        for (j=1; j < img->largura-1; j++)
        {
            if(img->dados[0][i][j])
            {
                if (img->dados[0][i][j+1] && img->dados[0][i][j+1] != img->dados[0][i][j])
                    return 0;

                if (img->dados[0][i+1][j] && img->dados[0][i+1][j] != img->dados[0][i][j])
                    return 0;
            }
        }
    return 1;
}

int conta_diferentes (Imagem* img, int r)
{
    int i, j, *v, cont = 0;

    v = (int *) calloc(r+1, sizeof(int));

    printf("r = %d\n", r);

    for(i=0; i< img->altura; i++)
        for (j=0; j < img->largura; j++)
                v[img->dados[0][i][j]] = img->dados[0][i][j];

    for(i=0; i<r; i++)
        if(v[i])
            cont++;

    free(v);

    return cont;
}
