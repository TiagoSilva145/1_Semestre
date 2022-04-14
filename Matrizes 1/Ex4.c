#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 5
#define C 5

int main ()
{
    int M[L][C], i, j, c;

    for(i=0; i<L; i++)
    {
        for(j=0; j<(i+1); j++)
        {
            if (j == 0 || j == i)
                M[i][j] = 1;
            else
                M[i][j] = M[i-1][j] + M [i-1][j-1];
        }
    }

    for(i=0; i<L; i++)
    {
        for(j=0; j<(i+1); j++)
            printf("%3d ", M[i][j]);
        printf("\n");
    }

}
