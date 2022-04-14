#include <stdio.h>
#include <string.h>

#define TAM 142

int main ()
{
    char s[TAM];
    int i=-1;

    fgets(s,100,stdin);
    s[strlen(s)-1] = '\0';

    while(s[++i])
    {
        if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
        {
            if (s[i] == 90)
                s[i] = 65;
            else if (s[i] == 122)
                s[i] = 97;
            else
            (s[i])++;
        }
        putchar(s[i]);
    }

}
