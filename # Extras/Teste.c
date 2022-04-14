#include <stdio.h>
#include <string.h>

int main()
{
    int ;

    while(scanf("%d", fen), fen != 10)
    {
        if(fen > 8)
        {
            if (fen == 'R')
                tab[i][j] = 1;
            else if (fen == 'N')
                tab[i][j] = 2;
            else if (fen == 'B')
                tab[i][j] = 3;
            else if (fen == 'Q')
                tab[i][j] = 4;
            else if (fen == 'K')
                tab[i][j] = 5;
            else if (fen == 'P')
                tab[i][j] = 6;
            else if (fen == 'r')
                tab[i][j] = 7;
            else if (fen == 'n')
                tab[i][j] = 8;
            else if (fen == 'b')
                tab[i][j] = 9;
            else if (fen == 'q')
                tab[i][j] = 10;
            else if (fen == 'k')
                tab[i][j] = 11;
            else
                tab[i][j] = 12;

            i++;
        }
        else if (fen == '/')
        {
            j++;
            i = 0;
        }
        else
        {
            for(k=0; k<fen; k++)
            {
                tab[i][j] = 0;
                i++;
            }
        }
    }

    return 0;
}
