#include <math.h>
#include <stdio.h>

int main ()
{
    int h1,h2,t;

    printf("Por favor, digite a hora de inicio e de termino do jogo, separando os valores por enter:\n");
    scanf ("%d%d", &h1,&h2);

    if (h1 > h2)
    {
        h2 = h2 +24;
    }
    t = h2 - h1;

    printf("O jogo durou %d hora(s)", t);


return 0;
}
