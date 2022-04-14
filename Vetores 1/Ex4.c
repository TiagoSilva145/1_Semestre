#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));

    int d[10],r[]={0,0,0,0,0,0},i,j;

    for(i=0;i<=9;i++)
    {
        d[i]=(rand()%6)+1;
    }

    for(i=0;i<=5;i++)
    {
        for(j=0;j<=9;j++)
        {
            if(i+1==d[j])
                r[i]++;
        }
    }

    for(i=0;i<=5;i++)
    {
        printf("O numero %d aparece %d vezes.\n", i+1, r[i]);
    }
}
