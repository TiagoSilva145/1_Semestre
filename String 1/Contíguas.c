#include <stdio.h>
#include <string.h>

#define TAM 100

int main ()
{
    int i=0;
    char p[TAM];

    printf("Digite a string: ");
    fgets(p,TAM,stdin);
    p[strlen(p)-1] = '\0';

    for(i=0; p[i]; i++)
    {
        if(p[i] == ' ')
            putchar('\n');
        else
            printf("%c", p[i]);
    }
}
