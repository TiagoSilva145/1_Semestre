#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct tempo
{
    int h, m, s;
} Tempo;

Tempo calcula_horario ()
{
    Tempo t;

    printf("Digite o total de segundos: ");
    scanf ("%d", &t.s);

    t.h = t.s/3600;
    t.s %= 3600;

    t.m = t.s/60;
    t.s %= 60;

    return t;
}

int main ()
{
    Tempo t;

    t = calcula_horario();

    printf("%02dh:%02dm:%02ds", t.h,t.m,t.s);

}
