#include <math.h>
#include <stdio.h>

int main ()
{
    int h1,h2,hf,m1,m2,mf;

    printf("Por favor, digite a hora de inicio e de termino do jogo, separando os valores por enter:\n");
    scanf ("%d%d", &h1,&h2);

    if (h1 > h2)
    {
        h2 = h2 +24;
    }
    hf = h2 - h1;

    printf("Agora digite o minuto de inicio e de termino do jogo, separando os valores por enter:\n");
    scanf ("%d%d", &m1,&m2);

    if (m1 > m2)
    {
        m2 = m2 +60;
    }
    mf = m2 - m1;

    printf("O jogo durou %d hora(s) e %d minuto(s)", hf,mf);


return 0;
}

