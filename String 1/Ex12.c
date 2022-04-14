#include <stdio.h>
#include <string.h>

#define TAM 100

int main ()
{
    char s1[TAM], s2[TAM];
    int i=0,j=0,k=0,cont=0;

    fgets(s1,TAM,stdin);
    s1[strlen(s1)-1] = '\0';

    while(s1[i])
    {
        while(s1[i++] != ' ' && s1[i])
        {
            cont++;
        }
        if (cont > 2)
        {
            s2[k++] = s1[j];
            s2[k++] = '.';
        }
        else
            while(s1[j] != ' ')
                s2[k++] = s1[j++];

        s2[k++] = ' ';
        j=i;
        cont = 0;
    }

    s2[k] = '\0';

    puts(s2);

}
