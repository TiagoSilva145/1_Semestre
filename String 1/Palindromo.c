#include <stdio.h>
#include <string.h>

#define TAM 100

int main ()
{
    int i=0,j;
    char p[TAM];

    printf("Digite a string: ");
    fgets(p,TAM,stdin);
    p[strlen(p)-1] = '\0';

    j=strlen(p)-1;

    while(p[i])
    {
        while(p[i] == 32 || p[j] == 32)
        {
            if(p[i] == 32)
                i++;
            if(p[j] == 32)
                j--;
        }
        if(p[i++] != p[j--])
        {
            printf("Nao eh palinndromo.");
            return 0;
        }
    }
        printf("Eh palindromo.");
    return 0;
}
