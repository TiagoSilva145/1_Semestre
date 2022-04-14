#include <stdio.h>
#include <string.h>

void preenche_vetor_vogal (int v[], char s[])
{
    int i=0;

    while(s[i])
    {
        if(s[i] == 65 || s[i] == 97)
        {
            (v[0])++;
        }
        else if(s[i] == 69 || s[i] == 101)
        {
            (v[1])++;
        }
        else if(s[i] == 73 || s[i] == 105)
        {
            (v[2])++;
        }
        else if(s[i] == 79 || s[i] == 111)
        {
            (v[3])++;
        }
        else if(s[i] == 85 || s[i] == 117)
        {
            (v[4])++;
        }
        i++;
    }
}

void imprime_vogais (int v[])
{
    int i=0;

    printf("a: ");
    for(i=1; i<=v[0]; i++)
        putchar('*');
    printf(" (%d)\n", v[0]);

    printf("e: ");
    for(i=1; i<=v[1]; i++)
        putchar('*');
    printf(" (%d)\n", v[1]);

    printf("i: ");
    for(i=1; i<=v[2]; i++)
        putchar('*');
    printf(" (%d)\n", v[2]);

    printf("o: ");
    for(i=1; i<=v[3]; i++)
        putchar('*');
    printf(" (%d)\n", v[3]);

    printf("u: ");
    for(i=1; i<=v[4]; i++)
        putchar('*');
    printf(" (%d)", v[4]);
}

int main ()
{
    char s[100];
    int v[] = {0,0,0,0,0};

    fgets(s,100,stdin);
    s[strlen(s)-1] = '\0';

    preenche_vetor_vogal(v,s);
    imprime_vogais(v);

}
