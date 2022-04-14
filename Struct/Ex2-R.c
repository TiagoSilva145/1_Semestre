typedef struct tempo
{
    int h;
    int m;
    int s;
} Tempo;

void converte_horario (Tempo *horario)
{
    horario->h = horario->s/3600;
    horario->s %= 3600;

    horario->m = horario->s/60;
    horario->s %= 60;
}

int main ()
{
    Tempo horario;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &horario.s);

    converte_horario (&horario);

    printf("%02d:%02d:%02d", horario.h, horario.m, horario.s );
}
