#include <stdio.h>
#include <string.h>

#define TAM 100

int main ()
{
    char s1[TAM], s2[TAM];
    int i,j,n;

    fgets(s1,TAM,stdin);
    s1[strlen(s1)-1] = '\0';

    fgets(s2,TAM,stdin);
    s2[strlen(s2)-1] = '\0';

    scanf("%d", &n);

    i=strlen(s1);

    for(j=0; j<n; j++)
    {
        s1[i++] = s2[j];
    }

    s1[i] = '\0';

    puts(s1);

}
