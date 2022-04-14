#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, t, len, cont, tab[8][8];
    char fen[100];

    while(scanf("%s", fen) != EOF)
    {
        i = 0;
        j = 0;
        len = strlen(fen);
        cont = 0;

        for(k=0; k<len; k++)
        {
            if (fen[k] == '/')
            {
                i++;
                j = 0;
            }
            else if(fen[k] < 48 || fen[k] > 58)
            {
                if (fen[k] == 'R')
                    tab[i][j] = 1;
                else if (fen[k] == 'N')
                    tab[i][j] = 2;
                else if (fen[k] == 'B')
                    tab[i][j] = 3;
                else if (fen[k] == 'Q')
                    tab[i][j] = 4;
                else if (fen[k] == 'K')
                    tab[i][j] = 5;
                else if (fen[k] == 'P')
                    tab[i][j] = 6;
                else if (fen[k] == 'r')
                    tab[i][j] = 7;
                else if (fen[k] == 'n')
                    tab[i][j] = 8;
                else if (fen[k] == 'b')
                    tab[i][j] = 9;
                else if (fen[k] == 'q')
                    tab[i][j] = 10;
                else if (fen[k] == 'k')
                    tab[i][j] = 11;
                else if (fen[k] == 'p')
                    tab[i][j] = 12;

                j++;
            }
            else
            {
                for(t=0; t<(fen[k]-48); t++)
                {
                    tab[i][j] = 0;
                    j++;
                }
            }
        }
        /*for(i=0; i<8; i++)
        {
            for(j=0; j<8; j++)
            {
                printf("%02d ", tab[i][j]);
            }
            printf("\n");
        }*/



    }

    return 0;
}
