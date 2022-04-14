#include <stdio.h>
#include <string.h>

#define TAM 100

void segmento_ab (char s[], int a, int b)
{
    int i;

    for(i=a; i<=b; i++)
        putchar(s[i]);
}

int main ()
{
    char s1[TAM];

    fgets(s1,100,stdin);
    s1[strlen(s1)-1] = '\0';

    segmento_ab (s1,2,4);
}
