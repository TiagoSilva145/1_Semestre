#include <stdio.h>
#include <string.h>

#define TAM 100

int main ()
{
    char s1[TAM], s2[TAM];
    int i,j=0;

    fgets(s1,TAM,stdin);
    s1[strlen(s1)-1] = '\0';

    fgets(s2,TAM,stdin);
    s2[strlen(s2)-1] = '\0';

    i = strlen(s1) - strlen(s2);

    while(s1[i])
    {
        if(s1[i++] != s2[j++])
        {
            printf("A segunda string nao esta contida na primeira.");
            return 0;
        }
    }

    printf("A segunda string esta contida na primeira.");

    return 0;
}
