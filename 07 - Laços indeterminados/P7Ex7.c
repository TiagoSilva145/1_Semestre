#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main ()
{
    int n,c=0,t=0; // t = tentativa do usuario.
    srand(time(NULL));

    n = (rand() % 500) + 1;

    printf("Tente adivinhar o valor do numero magico, ele se encontra entre 1 e 500. ");
    scanf ("%d", &t);
    if (t > n)
            printf("Boa tentativa, mas seu chute foi maior que o numero magico.\n");
        else if (t < n)
            printf("Boa tentativa, mas seu chute foi menor que o numero magico.\n");
    c++;

    while (t != n)
    {
        printf("Tente adivinhar mais uma vez. ");
        scanf ("%d", &t);
        c++;
        if (t > n)
            printf("Boa tentativa, mas seu chute foi maior que o numero magico.\n");
        else if (t < n)
            printf("Boa tentativa, mas seu chute foi menor que o numero magico.\n");
    }

    printf("Parabens, voce acertou o numero magico tomando apenas %d tentativas ", c);

    if (c < 4)
        printf("\o/");
    else if (c < 7)
        printf(":-D");
    else if (c < 11)
        printf(":-)");
    else
        printf(":-(");


return 0;
}

