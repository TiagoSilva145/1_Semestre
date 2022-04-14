#include <stdio.h>
#include <string.h>

#define TAM 100

int main ()
{
    char s1[TAM], s2[TAM];
    int i=-1,j=-1;

    fgets(s1,100,stdin);
    s1[strlen(s1)-1] = '\0';

    fgets(s2,100,stdin);
    s2[strlen(s2)-1] = '\0';

    while (s1[++i] || s2[++j])
    {
        do
        {
            putchar(s1[i++]);
        } while (s1[i] != 32 && s1[i]);

        do
        {
            putchar(s2[j++]);
        } while (s2[j] != 32 && s2[j]);
        putchar (' ');
    }
    return 0;
}
