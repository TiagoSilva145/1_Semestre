#include <stdio.h>
#include <string.h>

int retorna_consoantes (char s[])
{
    int i,cont=0;

    for (i=0; i<strlen(s); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')
        {
            if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
                cont++;
        }
    }
    return cont;
}

int main ()
{
    char s[] = "Tiago";
    printf("%d", retorna_consoantes(s));

    return 0;
}
